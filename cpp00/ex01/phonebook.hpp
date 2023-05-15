/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:24:02 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/15 15:59:38 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iostream>
# include <string>
# include <iomanip>

class contacts
{
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	number;
		std::string	secret;
		contacts(){};
		~contacts(){};
};

class phonebook
{
	private:
		void	add_contact(int index);
		void	display_all_contacts(int index);
		void	display_contact(int index);
		
		int		size;
	public:
		contacts contact[8];
		phonebook();
		~phonebook();
		void	add_to_phonebook();
		void	search_contact();
		std::string	format_string(std::string);
};

#endif