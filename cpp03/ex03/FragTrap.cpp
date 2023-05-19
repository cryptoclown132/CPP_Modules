
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Frag constructor called.\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) 
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Frag constructor with name called.\n";
}

FragTrap::FragTrap(FragTrap const &frag)
{
	this->_name = frag.getName();
	this->_hit_points = frag.getHitPoints();
	this->_energy_points = frag.getEnergyPoints();
	this->_attack_damage = frag.getAttackDamage();
	std::cout << "Frag copy constructor called.\n";
}


FragTrap::~FragTrap()
{
	std::cout << "Frag destructor called.\n";
}

FragTrap	&FragTrap::operator=(FragTrap const &frag)
{
	if (this == &frag)
		return *this;
	*this = frag;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey can i get a high five?\n";
}
