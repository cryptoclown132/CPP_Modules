/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 13:24:02 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/22 18:24:35 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
	private:
		Contact contact[8];
		int		_size;
		void	add_contact(int index);
		void	display_all_contacts(int index);
		void	display_contact(int index);
	public:
		PhoneBook();
		~PhoneBook();
		void		add_to_phonebook();
		void		search_contact();
		std::string	format_string(std::string);
};

#endif