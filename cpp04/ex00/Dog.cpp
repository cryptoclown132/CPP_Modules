
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called\n";
}

Dog::Dog(Dog const &dog)
{
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}


Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog const &dog)
{
	if (this == &dog)
		return	*this;
	this->_type = dog.getType();
	return	*this;
}

void	Dog::makeSound() const{
	std::cout << "Wuff, Wuff ...\n";
}