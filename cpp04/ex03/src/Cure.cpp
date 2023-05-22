
#include "../inc/Cure.hpp"

Cure::Cure()
{
	std::cout << "Cure constructor called\n";
}

Cure::Cure(Cure const &cure)
{
	std::cout << "Cure copy constructor called\n";
	*this = cure;
}

Cure::~Cure()
{
	std::cout << "Cure destructor called\n";
}

Cure	&Cure::operator=(Cure const &cure)
{
	if (this == &cure)
		return *this;

	*this = cure;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

AMateria*	Cure::clone() const
{
	return new Cure();
}