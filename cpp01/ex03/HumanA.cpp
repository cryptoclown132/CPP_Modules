
# include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon weapon_name) : _weapon(&weapon_name){
	this->_name = name;
}

HumanA::~HumanA()
{

}

void	HumanA::attack() const{
	std::cout << this->_name << " attacks with their " << this->_weapon->get_type() << std::endl;
}