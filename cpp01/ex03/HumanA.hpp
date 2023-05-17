#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	_name;
		Weapon *_weapon;
	public:
		void	attack() const;
		HumanA(std::string name, Weapon &weapon_type);
		~HumanA();
};

#endif