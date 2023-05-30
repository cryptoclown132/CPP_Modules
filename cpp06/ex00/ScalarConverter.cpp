/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:41:04 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/30 19:39:19 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
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
	return *this;
}

void	ScalarConverter::convert(std::string convert)
{
	if (std::isdigit(convert[0]) || )

	else ()
	// if (convert.length() == 1)
	// {

	// 	if (std::isprint(convert[0]))

	// }
}
