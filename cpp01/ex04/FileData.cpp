/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileData.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:00:39 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 20:00:39 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.hpp"

FileData::FileData(std::string file_name) : _file_name(file_name)
{
}

FileData::~FileData()
{
}

std::string	FileData::getName(void) const{
	return this->_file_name;
}

void	FileData::_replace_loop(std::ifstream &in_file, std::ofstream &out_file
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
	std::ifstream	in_file(this->getName());
	if (!in_file.is_open())
	{
		std::cout << "Could not open the file: " << this->getName() << std::endl;
		return ;
	}
	if (in_file.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "File is empty\n";
		return ;
	}
	std::ofstream	out_file(this->getName() + ".replace");
	if (!out_file.is_open())
	{
		std::cout << "Could not open the file: " << this->getName() << std::endl;
		in_file.close();
		return ;
	}
	_replace_loop(in_file, out_file, s1, s2);
	in_file.close();
	out_file.close();
}
