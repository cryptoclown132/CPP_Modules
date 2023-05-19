
#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called\n";
}

Cat::Cat(Cat const &cat)
{
	std::cout << "Cat copy constructor called\n";
	*this = cat;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

Cat	&Cat::operator=(Cat const &cat)
{
	if (this == &cat)
		return *this;
	this->_type = cat.getType();
	return *this;
}

void	Cat::makeSound() const{
	std::cout << "Meow, Meow ...\n";
}
