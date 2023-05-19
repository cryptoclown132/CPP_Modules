
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : _name("default name")
{
	std::cout << "Diamond constructor called.\n";
	this->_hit_points = FragTrap::getHitPoints();
	this->_energy_points = ScavTrap::getEnergyPoints();
	this->_attack_damage = FragTrap::getAttackDamage();
}

DiamondTrap::DiamondTrap(std::string name) : _name(name)
{
	std::cout << "Diamond constructor with name called.\n";
	this->ScavTrap::_name = name + "_clap_name";
	this->_hit_points = FragTrap::getHitPoints();
	this->_energy_points = ScavTrap::getEnergyPoints();
	this->_attack_damage = FragTrap::getAttackDamage();
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Diamond destructor called.\n";
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamond)
{
	std::cout << "Diamond copy constructor called.\n";
	*this = diamond;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &diamond)
{
	if (this == &diamond)
		return *this;
	this->_name = diamond.getName();
	this->_hit_points = diamond.FragTrap::getHitPoints();
	this->_energy_points = diamond.ScavTrap::getEnergyPoints();
	this->_attack_damage = diamond.FragTrap::getAttackDamage();
	return *this;
}

void		DiamondTrap::whoAmI(void)
{
	std::cout << "My own name is : " << this->_name << " and my ClapTrap name is : " << this->ClapTrap::_name << std::endl;
}

std::string	DiamondTrap::getDiamondName(void)
{
	return (this->_name);
}

void	DiamondTrap::setDiamondName(std::string name)
{
	this->_name = name;
}
