#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &wrong_cat);
		WrongCat	&operator=(WrongCat const &wrong_cat);
		~WrongCat();
		void	makeWrongSound();
};


#endif