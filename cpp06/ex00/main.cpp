/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 13:51:03 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/14 12:10:05 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
char ScalarConverter::_c = '\0';
int ScalarConverter::_i = 0;
float ScalarConverter::_f = 0.0f;
double ScalarConverter::_d = 0.0;

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Wrong number of args, has to be 1\n";
		return 1;
	}
	ScalarConverter::convert(argv[1]);
}