
#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombie_horde = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombie_horde[i].get_name(name);
	return (zombie_horde);
}
