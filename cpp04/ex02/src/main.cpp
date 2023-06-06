/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:23:01 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 19:36:49 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	// const Animal* i = new Cat();
	// std::cout << j->getType() << " " << std::endl;
	// std::cout << i->getType() << " " << std::endl;
	// i->makeSound(); //will output the cat sound!
	// j->makeSound();
	// meta->makeSound();
	// delete i;
	// delete j;
	// delete meta;

	// Cat cat;
	// cat.setIdeas(34, "idea");
	// std::cout << cat.getIdeas(34) << std::endl;
	Animal *animales[2];
	animales[0] = new Cat();
	animales[1] = new Dog();
	animales[0]->makeSound();
	animales[1]->makeSound();
	for (int i = 0; i < 2; i++)
		delete animales[i];
	Dog dawg;
	dawg.makeSound();
}
