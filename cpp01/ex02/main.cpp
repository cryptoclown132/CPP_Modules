/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:59:42 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 19:59:42 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string *stringPTR = &brain;
	std::string	&stringREF = brain;

	std::cout << "Adress brain: "<< &brain << std::endl;
	std::cout << "Adress stringPTR: "<< &stringPTR << std::endl;
	std::cout << "Adress stringREF: "<< &stringREF << std::endl;

	std::cout << "Value brain: "<< brain << std::endl;
	std::cout << "Value stringPTR: "<< *stringPTR << std::endl;
	std::cout << "Value stringREF: "<< stringREF << std::endl;
}