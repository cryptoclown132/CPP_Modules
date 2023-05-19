#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string	_wrong_type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &wrong_animal);
		WrongAnimal	&operator=(WrongAnimal const &wrong_animal);
		~WrongAnimal();
		virtual void	makeWrongSound();
		std::string		getWrongType(void) const;
		void			setWrongType(std::string wrong_type);
};

#endif