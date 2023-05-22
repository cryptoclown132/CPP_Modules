/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:30:20 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/22 18:48:59 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{	
}

std::string	Contact::getFirstName() const{
	return this->_first_name;
}

std::string	Contact::getLastName() const{
	return this->_last_name;	
}

std::string	Contact::getNickName() const{
	return this->_nick_name;
}
	
std::string	Contact::getNumber() const{
	return this->_number;
}
	
std::string	Contact::getSecret() const{
	return this->_secret;
}

void	Contact::setFirstName(std::string first_name)
{
	this->_first_name = first_name;
}

void	Contact::setLastName(std::string last_name)
{
	this->_last_name = last_name;	
}

		
void	Contact::setNickName(std::string nick_name)
{
	this->_nick_name = nick_name;	
}

void	Contact::setNumber(std::string number)
{
	this->_number = number;
}
	
void	Contact::setSecret(std::string secret)
{
	this->_secret = secret;
}
