#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	private:
		Brain *_brain;
	public:
		Cat();
		Cat(Cat const &cat);
		~Cat();
		Cat			&operator=(Cat const &cat);
		void		makeSound() const;
		void		setIdeas(int index, std::string idea);
		std::string	getIdeas(int index);
		//insert_ideas
};

#endif
