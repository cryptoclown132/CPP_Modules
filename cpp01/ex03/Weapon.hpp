/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:00:30 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 20:00:30 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class	Weapon
{
	private:
		std::string	_type;
	public:
		Weapon(std::string weapon_type);
		~Weapon();
		const std::string	&get_type() const;
		void	setType(std::string new_type);
};

#endif