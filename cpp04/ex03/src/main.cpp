/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:26:51 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:26:51 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Character.hpp"
#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	std::cout << "name: " << me->getName() << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	// std::cout << "Where Seg fault !!!!!!!!!!!!!!!!!!!!!!!!!!\n";
	me->use(0, *bob);
	me->use(1, *bob);


	MateriaSource a;
	MateriaSource b(a);


	// Character babo("king");
	// tmp = src->createMateria("ice");
	// babo.equip(tmp);
	// babo.use(0, *bob);

	delete bob;
	delete me;
	delete src;
	return 0;
}