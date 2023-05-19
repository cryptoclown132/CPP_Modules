
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("default name"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor called\n";
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Constructor with name called.\n";
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called.\n";
}

ClapTrap::ClapTrap(ClapTrap const &clap)
{
	std::cout << "Copy constructor called.\n";
	*this = clap;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &clap)
{
	std::cout << "Assignment operator called\n";
	if (this == &clap)
		return *this;
	this->_name = clap.getName();
	this->_attack_damage = clap.getAttackDamage();
	this->_energy_points = clap.getEnergyPoints();
	this->_hit_points = clap.getHitPoints();
	return *this;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy_points == 0 || this->_hit_points == 0)
	{
		std::cout << "ClapTrap has no energy points or hit points left to attack!\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attack_damage << " points of damage!\n";
	this->_energy_points--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap took damage, making it lose " << amount << " hit points!\n";
	this->_hit_points -= amount; 
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy_points == 0 || this->_hit_points == 0)
	{
		std::cout << "ClapTrap has no energy points or hit points left to repair itself!\n";
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " repairs itself" << ", by the amount of " << amount << "hit points\n";
	this->_hit_points += amount;
	this->_energy_points--;
}

void	ClapTrap::setHitPoints(unsigned int hit_points)
{
	this->_hit_points = hit_points;
}

void	ClapTrap::setEnergyPoints(unsigned int energy_points)
{
	this->_energy_points = energy_points;
}

void	ClapTrap::setAttackDamage(unsigned int attack_damage)
{
	this->_attack_damage = attack_damage;
}

void	ClapTrap::setName(std::string name)
{
	this->_name = name;
}

unsigned int	ClapTrap::getHitPoints(void) const{
	return this->_hit_points;
}

unsigned int	ClapTrap::getEnergyPoints(void) const{
	return this->_energy_points;
}

unsigned int	ClapTrap::getAttackDamage(void) const{
	return this->_attack_damage;
}

std::string	ClapTrap::getName(void) const{
	return this->_name;
}
