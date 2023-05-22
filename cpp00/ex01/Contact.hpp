/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/22 17:24:51 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/22 18:13:03 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <iostream>
# include <string>

class Contact
{
	private:
		std::string	_first_name;
		std::string	_last_name;
		std::string	_nick_name;
		std::string	_number;
		std::string	_secret;
	public:
		Contact();
		~Contact();
		std::string	getFirstName() const;
		std::string	getLastName() const;
		std::string	getNickName() const;
		std::string	getNumber() const;
		std::string	getSecret() const;
		void		setFirstName(std::string first_name);
		void		setLastName(std::string last_name);
		void		setNickName(std::string nick_name);
		void		setNumber(std::string number);
		void		setSecret(std::string secret);
};

#endif