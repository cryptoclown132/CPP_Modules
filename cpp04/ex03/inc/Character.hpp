/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:25:44 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:25:44 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP
# include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		Character();
		Character(Character const &character);
		Character(std::string name);
		~Character();
		Character			&operator=(Character const &character);
		std::string const	&getName() const;
		void				setName(std::string name);
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter &target);
		AMateria			*getMateria(int index) const;
};

#endif