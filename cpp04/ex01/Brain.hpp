#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>

class Brain
{
	private:
		std::string	_ideas[100];
	public:
		Brain();
		Brain(Brain const &brain);
		~Brain();
		Brain		&operator=(Brain const &brain);
		void		setIdeas(int index, std::string idea);
		std::string	getIdeas(int index);
};

#endif
