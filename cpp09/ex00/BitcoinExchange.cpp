/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:50:46 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/23 14:50:46 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
	_creatDataBase();
}
		
BitcoinExchange::BitcoinExchange(BitcoinExchange const &bitcoin)
{
	*this = bitcoin;
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange	&BitcoinExchange::operator=(BitcoinExchange const &bitcoin)
{
	if (this == &bitcoin)
		return *this;
	_bitcoin_db = bitcoin._bitcoin_db;
	return *this;
}

int	BitcoinExchange::validDate(std::string date)
{
	std::istringstream stream(date);// check if stream worked
	if (!stream.good())
	{
		std::cerr << "Error: Could not make the stream!\n";
		return ;
	}
	std::string part;
	int	year, month, day;
	std::getline(stream, part, '-');
	year = std::stoi(part);
	std::getline(stream, part, '-');
	month = std::stoi(part);
	std::getline(stream, part, '-');
	day = std::stoi(part);
	if (year < 2009 || month < 1 || month > 12 || day > 31 || day < 1)//|| year > 2022
	{
		return 1;
	}	
	return 0;
}

void	BitcoinExchange::printOutValue(std::string date, float amount)
{
	auto it = _bitcoin_db.find(date);// check again for auto
	if (it == _bitcoin_db.end())
	{
		it = _bitcoin_db.lower_bound(date);
		--it;
	}
	std::cout << date << " => " << amount << " = " << it->second * amount << std::endl;
}

void	BitcoinExchange::calculateValue(char *file)
{
	std::ifstream	infile(file);
	if (!infile.is_open())
	{
		std::cerr << "Error: Could not open the file!\n";
		return ;
	}
	if (infile.peek() == std::ifstream::traits_type::eof())
	{
		std::cerr << "Error: File is empty\n";
		return ;
	}
	std::string	line;
	size_t		delim;
	float		amount;
	while (std::getline(infile, line))
	{
		delim = line.find('|');
		if(delim == std::string::npos)
		{
			std::cerr << "Error: Bad input.\n";	//err
			continue;
		}
		amount = std::stof(line.substr(delim + 1));
		if (amount < 0 || amount > 1000)
		{
			std::cerr << "Error: Number has to be between 1 and 1000.\n";
			continue;
		}
		if (validDate(line.substr(0, delim - 1)))
		{
			std::cerr << "Error: Not a valid date\n";
			continue;
		}
		printOutValue(line.substr(0, delim - 1), amount);
	}
}

void	BitcoinExchange::_creatDataBase()
{
	std::ifstream	infile("data.csv");
	if (!infile.is_open())
	{
		std::cerr << "Error: Could not open the file!\n";//maybe throw exception
		return ;
	}
	std::string	line;
	size_t		delim;
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		delim = line.find(",");
		_bitcoin_db[line.substr(0, delim)] = std::stof(line.substr(delim + 1));
	}
}