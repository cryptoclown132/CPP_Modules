
#include "Zombie.hpp"

void	Zombie::annouce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string z_name)
{
	this->name = z_name;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << "got eliminated!\n";	
}