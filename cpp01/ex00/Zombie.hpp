
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
		Zombie* newZombie(std::string name);
		void randomChump(std::string name);
		Zombie(std::string z_name);
		~Zombie();
};

#endif
