/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:27:37 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/12 20:46:47 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	start_phonebook()
{
	std::string input;
	phonebook book;
	
	while (1)
	{
		std::cout << "Enter EXIT, SEARCH or ADD to start" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			break ;
		if (input == "ADD")
			book.add_to_phonebook();
		else if (input == "SEARCH")
			book.search_contact();
		else
			std::cout << input << " is not an option!" << std::endl;
	}
}

int	main()
{
	start_phonebook();
}