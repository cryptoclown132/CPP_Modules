/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:41:04 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/01 21:22:43 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
		_c = '\0';
		_i = 0;
		_f = 0.0f;
		_d = 0.0;
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
	_c = converter.getChar();
	_i = converter.getInt();
	_f = converter.getFloat();
	_d = converter.getDouble();
	return *this;
}

char	ScalarConverter::getChar() const{
	return _c;
}

int		ScalarConverter::getInt() const{
	return _i;
}

float	ScalarConverter::getFloat() const{
	return _f;
}

double	ScalarConverter::getDouble() const{
	return _d;
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
		else if (isprint(std::stoi(convert)))
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
	try //check here
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
	_f = std::stof(convert);
	std::cout << "char: Non displayable\n";
	std::cout << "int: " <<  static_cast<int>(_f) << std::endl;
	std::cout << "float: " << _f << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(_f) << std::endl;
	return true;
}


bool	ScalarConverter::_isDouble(std::string convert)
{	
	_d = std::stod(convert);
	std::cout << "char: Non displayable\n";
	std::cout << "int: " <<  static_cast<int>(_d) << std::endl;
	std::cout << "float: " << static_cast<float>(_d) << "f" << std::endl;
	std::cout << "double: " << _d << std::endl;
	return true;
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
	// f . and point also ignored
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
	//err checking
	//length > 1 and and charcaters in it wrong input except one + or - at the start
	std::string	special_cases[8] = {"inf", "+inf", "-inf", "nan", "nanf", "inff", "-inff", "+inff"};
	for (int i = 0; i < 8; i++)
	{
		if (!special_cases[i].compare(convert))
		{
			_specific_cases(convert);
			return ;
		}
	}
	if (!_error(convert))
	{
		std::cout << "Wrong input! Is not a number\n";
		return ;
	}
	bool	(ScalarConverter::*func[]) (std::string) = {&ScalarConverter::_isChar, &ScalarConverter::_isInt, &ScalarConverter::_isFloat
		, &ScalarConverter::_isDouble};

	int i = 0;
	while (i < 4 && !(this->*func[i])(convert))
		i++;
}
