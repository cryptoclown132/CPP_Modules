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

void	BitcoinExchange::_validStream(std::ifstream &infile) const{
	if (!infile)
		throw std::runtime_error("Error: Could not open the file.");
	if (infile.peek() == std::ifstream::traits_type::eof())
		throw std::runtime_error("Error: File is empty.");
}

int	BitcoinExchange::_validAmount(float amount) const{
	if (amount < 0 || amount > 1000)
	{
		std::cerr << "Error: Number has to be between 1 and 1000.\n";
		return 1;
	}
	return 0;
}

int	BitcoinExchange::_validInput_2(std::string line, size_t delim)
{
	if(delim == std::string::npos)
		return 1;
	std::string substr = line.substr(0, delim);
	if (substr.find_first_not_of("0123456789- ") != std::string::npos)
		return 1;
	substr = line.substr(delim + 1);
	if (substr.find_first_not_of("0123456789. \r") != std::string::npos || (line.find('.') != std::string::npos && (!isdigit(line[line.find('.') - 1]))))
		return 1;
	return 0;
}

int	BitcoinExchange::_validInput(std::string line, size_t delim)
{
	if (_validInput_2(line, delim))
	{
		std::cerr << "Error: Bad input.\n";
		return 1;
	}
	delim = 0;
	for (int i = 0; i != std::string::npos && line[i] != '|'; i++)
	{
		if (line[i] == '-' && isdigit(line[i + 1]))
			delim++;
		else if (line[i] == '-' && !isdigit(line[i + 1]))
		{
			std::cerr << "Error: Bad input.\n";
			return 1;
		}
	}
	if (delim != 2)
	{
		std::cerr << "Error: Bad input.\n";
		return 1;
	}
	return 0;
}

int	BitcoinExchange::_validDate(std::string date)
{
	std::istringstream	stream(date);
	std::string	part;
	int	year, month, day;

	if (!stream.good())
	{
		std::cerr << "Error: Could not make the stream!\n";
		return 1;
	}
	std::getline(stream, part, '-');
	year = std::stoi(part);
	std::getline(stream, part, '-');
	month = std::stoi(part);
	std::getline(stream, part, '-');
	day = std::stoi(part);
	if (year < 2009 || month < 1 || month > 12 || day > 31 || day < 1)
	{
		std::cerr << "Error: Not a valid date.\n";
		return 1;
	}
	return 0;
}

void	BitcoinExchange::_printOutValue(std::string date, float amount)
{
	std::map<std::string, float>::iterator it = _bitcoin_db.find(date);

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
	std::string		line;
	size_t			delim;
	float			amount;

	_validStream(infile);
	while (std::getline(infile, line))
	{
		delim = line.find('|');
		if (_validInput(line, delim))
			continue;
		amount = std::stof(line.substr(delim + 1));
		if (_validAmount(amount) || _validDate(line.substr(0, delim - 1)))
			continue;
		_printOutValue(line.substr(0, delim - 1), amount);
	}
}

void	BitcoinExchange::_creatDataBase()
{
	std::ifstream	infile("data.csv");
	std::string		line;
	size_t			delim;

	_validStream(infile);
	std::getline(infile, line);
	while (std::getline(infile, line))
	{
		delim = line.find(",");
		_bitcoin_db[line.substr(0, delim)] = std::stof(line.substr(delim + 1));
	}
}
