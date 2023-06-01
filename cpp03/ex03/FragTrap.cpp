
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

FragTrap::FragTrap(FragTrap const &frag) : ClapTrap(frag)
{
	*this = frag;
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
	this->_name = frag.getName();
	this->_hit_points = frag.getHitPoints();
	this->_energy_points = frag.getEnergyPoints();
	this->_attack_damage = frag.getAttackDamage();
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "Hey can i get a high five?\n";
}

void	FragTrap::attack(const std::string &target)
{
	if (this->_energy_points == 0 || this->_hit_points == 0)
	{
		std::cout << "FragTrap has no energy points or hit points left to attack!\n";
		return ;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
	this->_energy_points--;
}
