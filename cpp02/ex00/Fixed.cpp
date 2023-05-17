
#include "Fixed.hpp"

const int Fixed::_frac_bits = 8;

Fixed::Fixed() : _fixed_point(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed const &fixed)
{
	std::cout << "Copy constructor called\n";
	this->_fixed_point = fixed.getRawBits();
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}
		
int	Fixed::getRawBits(void) const{
	std::cout << "getRawBits member function called\n";
	return this->_fixed_point;
}
	
void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called\n";
	this->_fixed_point = raw;
}

Fixed	&Fixed::operator=(Fixed const &fixed)
{
	std::cout << "Copy assignment operator called\n";
	if (this == &fixed)
		return *this;
	this->_fixed_point = fixed.getRawBits();
	return *this;
}