/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:12:10 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 14:32:57 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"
#include "../inc/Dog.hpp"
//#include "../inc/Animal.hpp"
#include "../inc/WrongCat.hpp"

int main()
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "ANIMAL\n";
	std::cout << partition << std::endl;
	{
		const Animal* animal = new Animal();
		animal->makeSound();
		delete animal;
	}
	
	std::cout << partition << std::endl;
	std::cout << "DOG\n";
	std::cout << partition << std::endl;
	{
		Animal* dog = new Dog();
		dog->setType("Labrador");
		std::cout << dog->getType() << std::endl;
		dog->makeSound();
		delete dog;
	}
	
	std::cout << partition << std::endl;
	std::cout << "CAT\n";
	std::cout << partition << std::endl;
	{
		Animal* cat = new Cat();
		cat->setType("red cat");
		std::cout << cat->getType() << std::endl;
		cat->makeSound();
		delete cat;
	}

	std::cout << partition << std::endl;
	std::cout << "WRONGANIMAL\n";
	std::cout << partition << std::endl;
	{
		const WrongAnimal* wrong_animal = new WrongAnimal();
		wrong_animal->makeWrongSound();
		delete wrong_animal;
	}
	
	std::cout << partition << std::endl;
	std::cout << "WRONGCAT\n";
	std::cout << partition << std::endl;
	{
		WrongAnimal* wrong_cat = new WrongCat();
		wrong_cat->setWrongType("wrong cat");
		std::cout << wrong_cat->getWrongType() << std::endl;
		wrong_cat->makeWrongSound();
		delete wrong_cat;
	}
}