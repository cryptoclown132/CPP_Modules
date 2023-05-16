
#include "Zombie.hpp"

void	Zombie::randomChump(std::string name)
{
	Zombie *chump = new Zombie(name);
	chump->annouce();
	delete chump;
}