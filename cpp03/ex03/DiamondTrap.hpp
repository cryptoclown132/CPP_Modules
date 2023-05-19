#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const &diamond);
		~DiamondTrap();
		DiamondTrap	&operator=(DiamondTrap const &diamond);
		void		whoAmI();
		using		ScavTrap::attack;
		std::string	getDiamondName();
		void		setDiamondName(std::string name);
};

#endif