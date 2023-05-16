
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
	private:
		std::string	name;
	public:
		void	annouce(void);
		void	Zombie::get_name(std::string z_name);
		Zombie();
		~Zombie();
};

Zombie* zombieHorde( int N, std::string name );

#endif
