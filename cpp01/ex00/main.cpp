/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 19:58:33 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 19:58:33 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *zz = newZombie("Tom");
	zz->annouce();
	Zombie	jon("Jon");
	jon.annouce();
	randomChump("Ron");
	delete zz;
}