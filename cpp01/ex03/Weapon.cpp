
#include "Weapon.hpp"

Weapon::Weapon(std::string weapon_type)
{
	if (weapon_type.empty())
		this->_type = "default weapon";
	else
		this->_type = weapon_type;
}

Weapon::~Weapon()
{

}

std::string	Weapon::get_type() const{
	return (this->_type);
}

void	Weapon::setType(std::string new_type)
{
	if (new_type.empty())
		this->_type = "default weapon";
	else
		this->_type = new_type;
}