/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:23:01 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/15 16:36:03 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

phonebook::~phonebook()
{
	std::cout << "Phonebook got destroyed" << std::endl; 
}

phonebook::phonebook()
{
	int	size = 0;
}

void	phonebook::add_contact(int index)
{
	contacts	 &person = contact[index];

	std::cout << "Enter your first name: ";
	std::cin >> person.first_name;
	std::cout << "Enter your last name: ";
	std::cin >> person.last_name;
	std::cout << "Enter your nickname: ";
	std::cin >> person.nickname;
	
	// //check that only digits
	std::cout << "Enter your number: ";
	std::cin >> person.number;
	std::cout << "Enter your secret: ";
	std::cin >> person.secret;
}

std::string	phonebook::format_string(std::string str)
{
	std::string	tmp;

	if (str.length() > 10)
	{
		tmp = str.substr(0, 9);
		tmp += '.';
		return (tmp);
	}
	return (str);
}

void	phonebook::display_all_contacts(int index)
{
	std::cout << index << "         |";
	std::cout << std::setw(10) << format_string(contact[index].first_name)  << "|";
	std::cout << std::setw(10) << format_string(contact[index].last_name)  << "|";
	std::cout << std::setw(10) << format_string(contact[index].nickname)  << "|" << std::endl;
}

void	phonebook::display_contact(int index)
{
	std::cout << "First name: "<< contact[index].first_name << std::endl;
	std::cout << "Last name: "<< contact[index].last_name << std::endl;
	std::cout << "Nickname: "<< contact[index].nickname << std::endl;
	std::cout << "Number: "<< contact[index].number << std::endl;
	std::cout << "Secret: "<< contact[index].secret << std::endl;
}

void	phonebook::search_contact()
{
	for (int i = 0; i < size; i++)
		display_all_contacts(i);

	int	index;
	std::cout << "Enter a number between 0 and 7 to get the index of your searched contact: ";
	std::cin >> index;
	if (std::cin.fail())
	{
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid input. You have to enter an int." << std::endl;
		return ;
	}
	if (index >= size)
		std::cout << "There is currently no contact at position " << index << std::endl;
	else
		display_contact(index);
}

void	phonebook::add_to_phonebook()
{
	if (size == 8)
	{
		for (int i = 0; i < size - 1; i++)
			contact[i] = contact[i + 1];
		size--;
	}
	size++;
	add_contact(size - 1);
}
