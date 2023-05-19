#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	private:

	public:
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &scav);
		~ScavTrap();
		ScavTrap	&operator=(ScavTrap const &scav);
		void		attack(const std::string& target);
		void		guardGate();
};

#endif