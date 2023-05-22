
#include "Animal.hpp"

Animal::Animal() : _type("default animal")
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal(std::string type) : _type(type)
{
	std::cout << "Animal constructor with type called\n";
}

Animal::Animal(Animal const &animal)
{
	*this = animal;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

Animal	&Animal::operator=(Animal const &animal)
{
	if (this == &animal)
		return *this;
	this->_type = animal.getType();
	return (*this);
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}

std::string	Animal::getType(void) const{
	return this->_type;
}

// void	Animal::makeSound() const{
// 	std::cout << "Screams in animal ...\n";
// }
