/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:18:13 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 19:23:21 by jkroger          ###   ########.fr       */
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
		animales[0]->makeSound();
		animales[1]->makeSound();
		animales[2]->makeSound();
		animales[3]->makeSound();
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
}
