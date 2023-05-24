/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:59:56 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 19:59:56 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon		*_weapon;
	public:
		HumanA(std::string name, Weapon &weapon_type);
		~HumanA();
		void		attack() const;
		std::string	getName() const;
		Weapon	*getWeapon() const;
};

#endif