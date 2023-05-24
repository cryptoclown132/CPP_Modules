/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileData.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:00:46 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 20:00:46 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEDATA_HPP
# define FILEDATA_HPP
# include <iostream>
# include <fstream>
# include <string>

class FileData
{
private:
	std::string	_file_name;
	void	_replace_loop(std::ifstream &in_file, std::ofstream &out_file
		, std::string s1, std::string s2);
public:
	FileData(std::string file_name);
	~FileData();
	void	replace(std::string s1, std::string s2);
	std::string	getName() const;
};




#endif