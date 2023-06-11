/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:23:01 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/10 01:00:47 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Animal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "ANIMAL ARRAY\n";
	std::cout << partition << std::endl;
	{
		Animal *animales[4];
		animales[0] = new Cat();
		animales[1] = new Dog();
		animales[2] = new Cat();
		animales[3] = new Dog();
		for (int i = 0; i < 4; i++)
			animales[i]->makeSound();
		for (int i = 0; i < 4; i++)
			delete animales[i];
	}

	std::cout << partition << std::endl;
	std::cout << "CAT BRAIN\n";
	std::cout << partition << std::endl;
	{
		Cat cat;
		cat.setIdeas(34, "idea");
		std::cout << cat.getIdeas(34) << std::endl;
		for (int i = 0; i < 50; i++)
			cat.setIdeas(i, "no clue");
		Cat bluecat(cat);
		for (int i = 0; i < 100; i++)
			std::cout << bluecat.getIdeas(i) << std::endl;	

		bluecat.setIdeas(6, "newthings");
		std::cout << "Bluecat: " << bluecat.getIdeas(6) << std::endl;
		std::cout << "Cat: " << cat.getIdeas(6) << std::endl;
	}

	std::cout << partition << std::endl;
	std::cout << "DOG BRAIN\n";
	std::cout << partition << std::endl;
	{
		Dog dog;
		dog.setIdeas(69, "eat.sleep.repeat");
		std::cout << dog.getIdeas(69) << std::endl;
		for (int i = 0; i < 50; i++)
			dog.setIdeas(i, "no brainer");
		Dog dawg(dog);
		for (int i = 0; i < 100; i++)
			std::cout << dawg.getIdeas(i) << std::endl;	
		dawg.setIdeas(6, "run");
		std::cout << "Bluecat: " << dawg.getIdeas(6) << std::endl;
		std::cout << "Cat: " << dog.getIdeas(6) << std::endl;
		dog.setIdeas(101, "ad");
		dog.getIdeas(101);
	}
	// Animal *animales[2];
	// animales[0] = new Cat();
	// animales[1] = new Dog();
	// animales[0]->makeSound();
	// animales[1]->makeSound();
	// for (int i = 0; i < 2; i++)
	// 	delete animales[i];
	// Dog dawg;
	// dawg.makeSound();
}
