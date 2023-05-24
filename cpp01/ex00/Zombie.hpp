/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:58:57 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 19:58:57 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	_name;
	public:
		Zombie(std::string z_name);
		~Zombie();
		void		annouce(void);
		std::string	getName() const;
};
Zombie		*newZombie(std::string name);
void		randomChump(std::string name);

#endif
