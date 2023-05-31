/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:41:04 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/31 18:56:46 by jkroger          ###   ########.fr       */
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
	if (convert.length() == 1 && isprint(convert[0]) && !isdigit(convert[0]))
	{
		_c = convert[0];
		_i = static_cast<int>(_c);
		_f = static_cast<float>(_c);
		_d = static_cast<double>(_c);
		return true;
	}
	return false;
}

bool	ScalarConverter::_isInt(std::string convert)//check for i Min and Max
{
	for (int i = 0; convert[i];i++)
	{
		if (convert[i] < '0' || convert[i] > 9)//overthink
			return false;
	}
	_i = std::stoi(convert);
	//_c = convert[0];
	_f = static_cast<float>(_i);
	_d = static_cast<double>(_i);
		return true;
}

bool	ScalarConverter::_isFloat(std::string convert)
{
	for (int i = 0; convert[i] != '.'; i++)

	for (int i = 0; convert[i] && convert[i] != 'f'; i++)

	if (convert[i - 1] != 'f')
		return false;
	_f = std::stof(convert);
	//_c = convert[0];
	_i = static_cast<int>(_f);
	_d = static_cast<double>(_f);
	return true;
}


bool	ScalarConverter::_isDouble(std::string convert)
{
	_d = std::stod(convert);
	_i = static_cast<int>(_d);
	_f = static_cast<float>(_d);
	//_c = convert[0];
	return true;
}

#include <iomanip>

void	ScalarConverter::_specific_cases(std::string convert)
{
	std::cout << "char: impossible\n";
	std::cout << "int: impossible\n";
	std::cout << "float: " << std::setw(3) << convert << "f"<< std::endl;
	std::cout << "double: " << std::setw(3) << convert << std::endl;
}

void	ScalarConverter::convert(std::string convert)
{
	//loop to check for every data type
	//basic err check
	//nan
	// if (is char)
	//else if is int
	//else if is float
	//else if is double
	std::string	special_cases[8] = {"inf", "+inf", "-inf", "nan", "nanf", "inff", "-inff", "+inff"};
	for (int i = 0; i < 8; i++)
	{
		if (!special_cases[i].compare(convert))
		{
			_specific_cases(convert);
			return ;
		}
	}
	
	bool	(ScalarConverter::*func[]) (std::string) = {&ScalarConverter::_isChar, &ScalarConverter::_isInt, &ScalarConverter::_isFloat
		, &ScalarConverter::_isDouble};
	for (int i = 0; i < 4 && !(this->*func[i])(convert); i++)
	
	//std::cout << _c << std::endl;
	if (_c == '\0')
	{
		std::cout << "ok\n";
		
		std::cout << "char: Non displayable\n";
	}
	else
	{
		std::cout << "char: " << convert << std::endl;
	}
	std::cout << "int: " << _i << std::endl;
	std::cout << "float: " << _f << std::endl;
	std::cout << "double: " << _d << std::endl;
}
