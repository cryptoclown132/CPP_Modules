#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class	Weapon
{
	private:
		std::string	_type;
	public:
		std::string	get_type() const;
		void	setType(std::string new_type);
		Weapon(std::string weapon_type);
		~Weapon();
};

#endif