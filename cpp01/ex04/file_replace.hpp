
#ifndef FILE_REPLACE_HPP
# define FILE_REPLACE_HPP
# include <iostream>
# include <fstream>
# include <string>

class FileData
{
private:
	std::string	_file_name;
	void	replace_loop(std::ifstream &in_file, std::ofstream &out_file
		, std::string s1, std::string s2);
public:
	FileData(std::string file_name);
	~FileData();
	void	replace(std::string s1, std::string s2);
	std::string	get_name();
};




#endif