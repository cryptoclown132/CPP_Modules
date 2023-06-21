/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:41:04 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/14 12:07:51 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
		ScalarConverter::_c = '\0';
		ScalarConverter::_i = 0;
		ScalarConverter::_f = 0.0f;
		ScalarConverter::_d = 0.0;
}


ScalarConverter::ScalarConverter(ScalarConverter const &converter)
{
	*this = converter;
}
	
ScalarConverter::~ScalarConverter()
{
}

ScalarConverter	&ScalarConverter::operator=(ScalarConverter const &converter)
{
	if (this == &converter)
		return *this;
	ScalarConverter::_c = converter.getChar();
	ScalarConverter::_i = converter.getInt();
	ScalarConverter::_f = converter.getFloat();
	ScalarConverter::_d = converter.getDouble();
	return *this;
}

char	ScalarConverter::getChar() const{
	return ScalarConverter::_c;
}

int		ScalarConverter::getInt() const{
	return ScalarConverter::_i;
}

float	ScalarConverter::getFloat() const{
	return ScalarConverter::_f;
}

double	ScalarConverter::getDouble() const{
	return ScalarConverter::_d;
}

bool	ScalarConverter::_isChar(std::string convert)
{
	try
	{
		if (convert.length() == 1 && isprint(convert[0]))
		{
			_c = convert[0];
			std::cout << "char: " << _c << std::endl;
			std::cout << "int: " <<  static_cast<int>(_c) << std::endl;
			std::cout << "float: " << static_cast<float>(_c) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(_c) << ".0" << std::endl;
			return true;
		}
		else if (convert.find('f') == std::string::npos && convert.find('.') == std::string::npos && isprint(std::stoi(convert)))
		{
			_c = std::stoi(convert);
			std::cout << "char: " << _c << std::endl;
			std::cout << "int: " <<  static_cast<int>(_c) << std::endl;
			std::cout << "float: " << static_cast<float>(_c) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(_c) << ".0" << std::endl;
			return true;
		}
		return false;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
}

bool	ScalarConverter::_isInt(std::string convert)
{	
	for (int i = 0; convert[i];i++)
	{		
		if (convert[i] < '0' || convert[i] > '9')
			return false;
	}
	try
	{
		_i = std::stoi(convert);
		std::cout << "char: Non displayable\n";
		std::cout << "int: " <<  _i << std::endl;
		std::cout << "float: " << static_cast<float>(_i) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(_i) << ".0" << std::endl;
		return true;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
}

bool	ScalarConverter::_isFloat(std::string convert)
{
	int i = 0;

	while (convert[i] != '.')
		i++;
	while (convert[i] && convert[i] != 'f')
		i++;
	if (convert[i - 1] != 'f')
		return false;
	try
	{
		_f = std::stof(convert);
		if (isprint(std::stoi(convert)))
			std::cout << "char: " << static_cast<char>(_f) << std::endl;
		else
			std::cout << "char: Non displayable\n";
		std::cout << "int: " <<  static_cast<int>(_f) << std::endl;
		std::cout << "float: " << _f << (floor(_f) == _f ? ".0" : "") << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(_f) << (floor(_f) == _f ? ".0" : "") << std::endl;
		return true;
	}
	catch(const std::out_of_range& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}	
}

bool	ScalarConverter::_isDouble(std::string convert)
{
	try
	{
		_d = std::stod(convert);
		if (isprint(std::stoi(convert)))
			std::cout << "char: " << static_cast<char>(_d) << std::endl;
		else
			std::cout << "char: Non displayable\n";
		std::cout << "int: " <<  static_cast<int>(_d) << std::endl;
		std::cout << "float: " << static_cast<float>(_d) << (floor(_d) == _d ? ".0" : "") << "f" << std::endl;
		std::cout << "double: " << _d << (floor(_d) == _d ? ".0" : "") << std::endl;
		return true;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return false;
	}
}


void	ScalarConverter::_specific_cases(std::string convert)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	if (convert[0] == '+' || convert[0] == '-')
	{
		std::cout << "float: " << convert.substr(0, 4) << "f"<< std::endl;
		std::cout << "double: " << convert.substr(0, 4) << std::endl;
	}
	else
	{
		std::cout << "float: " << convert.substr(0, 3) << "f"<< std::endl;
		std::cout << "double: " << convert.substr(0, 3) << std::endl;
	}
}

bool	ScalarConverter::_error(std::string convert)
{
	if (convert.length() == 1)
		return true;
	int i = 0;
	int point = 0;
	if (convert[i] == '+' || convert[i] == '-')
		i++;
	while (convert[i])
	{
		if (convert[i] == '.')
			point++;
		if (convert[i] == 'f' && convert[i + 1])
			return false;
		if (point > 1 || (!isdigit(convert[i]) && convert[i] != 'f' && convert[i] != '.'))
			return false;
		i++;
	}
	return true;
}

void	ScalarConverter::convert(std::string convert)
{
	std::string	special_cases[8] = {"inf", "+inf", "-inf", "nan", "nanf", "inff", "-inff", "+inff"};
	for (int i = 0; i < 8; i++)
	{
		if (!special_cases[i].compare(convert))
		{
			_specific_cases(convert);
			return ;
		}
	}
	if (!_error(convert) || convert.length() < 1)
	{
		std::cout << "Wrong input! Is not a number\n";
		return ;
	}
	bool	(*func[]) (std::string) = {&ScalarConverter::_isChar, &ScalarConverter::_isInt, &ScalarConverter::_isFloat
		, &ScalarConverter::_isDouble};
	int i = 0;
	while (i < 4 && !(*func[i])(convert))
		i++;
	if (i == 4)
		std::cout << "Number too big!\n";
}
