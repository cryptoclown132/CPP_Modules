
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Scav constructor called.\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) 
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "Scav constructor with name called.\n";
}

ScavTrap::ScavTrap(ScavTrap const &scav)
{
	this->_name = scav.getName();
	this->_hit_points = scav.getHitPoints();
	this->_energy_points = scav.getEnergyPoints();
	this->_attack_damage = scav.getAttackDamage();
	std::cout << "Scav copy constructor called.\n";
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav destructor called.\n";
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &scav)
{
	if (this == &scav)
		return *this;
	*this = scav;
	return *this;
}

void		ScavTrap::attack(const std::string& target)
{
	if (this->_energy_points == 0 || this->_hit_points == 0)
	{
		std::cout << "ScavTrap has no energy points or hit points left to attack!\n";
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
	this->_energy_points--;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "The ScavTrap is now in Gate keeper mode.\n"; 
}