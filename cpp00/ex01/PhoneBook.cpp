/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 19:23:01 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/01 18:27:42 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::~PhoneBook()
{
	std::cout << "Phonebook got destroyed" << std::endl; 
}

PhoneBook::PhoneBook() : _size(0)
{
	std::cout << "Phonebook created\n";
}

void	PhoneBook::add_contact(int index)
{
	Contact		&person = contact[index];
	std::string	tmp;

	std::cout << "Enter your first name: ";
	getline(std::cin, tmp);
	person.setFirstName(tmp);
	std::cout << "Enter your last name: ";
	getline(std::cin, tmp); 
	person.setLastName(tmp);
	std::cout << "Enter your nickname: ";
	getline(std::cin, tmp); 
	person.setNickName(tmp);
	std::cout << "Enter your number: ";
	getline(std::cin, tmp);
	person.setNumber(tmp);
	std::cout << "Enter your secret: ";
	getline(std::cin, tmp); 
	person.setSecret(tmp);
}

std::string	PhoneBook::format_string(std::string str)
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

void	PhoneBook::display_all_contacts(int index)
{
	std::cout << std::setw(10) << index << "|";
	std::cout << std::setw(10) << format_string(contact[index].getFirstName())  << "|";
	std::cout << std::setw(10) << format_string(contact[index].getLastName())  << "|";
	std::cout << std::setw(10) << format_string(contact[index].getNickName())  << "|" << std::endl;
}

void	PhoneBook::display_contact(int index)
{
	std::cout << "First name: "<< contact[index].getFirstName() << std::endl;
	std::cout << "Last name: "<< contact[index].getLastName() << std::endl;
	std::cout << "Nickname: "<< contact[index].getNickName() << std::endl;
	std::cout << "Number: "<< contact[index].getNumber() << std::endl;
	std::cout << "Secret: "<< contact[index].getSecret() << std::endl;
}

void	PhoneBook::search_contact()
{
	for (int i = 0; i < this->_size; i++)
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
	if (index >= this->_size)
		std::cout << "There is currently no contact at position " << index << std::endl;
	else
		display_contact(index);
}

void	PhoneBook::add_to_phonebook()
{
	if (this->_size == 8)
	{
		for (int i = 0; i < this->_size - 1; i++)
			contact[i] = contact[i + 1];
		this->_size--;
	}
	this->_size++;
	add_contact(this->_size - 1);
}
