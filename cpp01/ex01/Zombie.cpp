
#include "Zombie.hpp"

void	Zombie::annouce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{

}

Zombie::~Zombie(void)
{
	std::cout << this->name << "got eliminated!\n";	
}

void	Zombie::get_name(std::string z_name)
{
	this->name = z_name;
}
