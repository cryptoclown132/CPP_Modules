
#include "file_replace.hpp"

FileData::FileData(std::string file_name) : _file_name(file_name){
}

FileData::~FileData()
{
}

std::string	FileData::get_name(void)
{
	return this->_file_name;
}

void	FileData::replace_loop(std::ifstream &in_file, std::ofstream &out_file
	, std::string s1, std::string s2)
{
	std::string	line;

	while (std::getline(in_file, line))
	{
		for (int pos = line.find(s1); pos != std::string::npos; pos = line.find(s1))
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
		}
		out_file << line;
	}
}

void	FileData::replace(std::string s1, std::string s2)
{
	std::ifstream	in_file(this->_file_name);
	if (!in_file.is_open())
	{
		std::cout << "Could not open the file: " << this->_file_name << std::endl;
		return ;
	}
	std::ofstream	out_file(this->_file_name + ".replace");
	if (!out_file.is_open())
	{
		std::cout << "Could not open the file: " << this->_file_name << std::endl;
		in_file.close();
		return ;
	}
	replace_loop(in_file, out_file, s1, s2);
	in_file.close();
	out_file.close();
}
