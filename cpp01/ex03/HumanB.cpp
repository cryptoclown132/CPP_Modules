
#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{

}

void	HumanB::attack() const{
	std::cout << this->_name << " attacks with their " << this->_weapon->get_type() << std::endl;
}