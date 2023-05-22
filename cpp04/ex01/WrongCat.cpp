
#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(WrongCat const &wrong_cat)
{
	std::cout << "WrongCat copy constructor called\n";
	*this = wrong_cat;
}

WrongCat	&WrongCat::operator=(WrongCat const &wrong_cat)
{
	if (this == &wrong_cat)
		return *this;
	this->_wrong_type = wrong_cat.getWrongType();
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void	WrongCat::makeWrongSound()
{
	std::cout << "Wrong meow, meow ...\n";
}
