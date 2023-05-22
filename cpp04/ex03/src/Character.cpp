
#include "Character.hpp"

Character::Character() : _name("Default character")
{
	std::cout << "Character constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(std::string name) : _name(name)
{
	std::cout << "Character string constructor called\n";
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character(Character const &character)
{

	std::cout << "Character copy constructor called\n";
	*this = character;
}

Character::~Character()
{
	std::cout << "Character destructor called\n";
}

Character	&Character::operator=(Character const &character)
{
	if (this == &character)
		return *this;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = character.getMateria(i);
	this->_name = character.getName();
}

AMateria	*Character::getMateria(int index) const{
	if (index >= 0 && index <= 3)
		return this->_inventory[index];
}

std::string const	&Character::getName() const{
	return this->_name;
}

void	Character::setName(std::string name)
{
	this->_name = name; 
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_inventory[i] != NULL)
		{
			this->_inventory[i] = m;
			return ;
		}	
	}
	std::cout << "Iventory full!\n";
}

//check for mem leaks
void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx] = NULL;
}
		
void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx <= 3)
		this->_inventory[idx]->use(target); 
}
