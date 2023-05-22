
#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor called\n";
	this->_brain = new Brain();
}

Dog::Dog(Dog const &dog)
{
	std::cout << "Dog copy constructor called\n";
	*this = dog;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called\n";
}

Dog	&Dog::operator=(Dog const &dog)
{
	if (this == &dog)
		return	*this;
	this->_type = dog.getType();
	this->_brain = new Brain();
	for (int i = 0; i < 100; i++)
		this->_brain->setIdeas(i, dog._brain->getIdeas(i));
	return	*this;
}

void	Dog::makeSound() const{
	std::cout << "Wuff, Wuff ...\n";
}

void	Dog::setIdeas(int index, std::string idea)
{
	this->_brain->setIdeas(index, idea);
}

std::string	Dog::getIdeas(int index)
{
	return this->_brain->getIdeas(index);
}
