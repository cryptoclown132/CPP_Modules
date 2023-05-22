#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : IMateriaSource
{
	private:
		std::string	_name;
		AMateria	*_inventory[4];
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &materia_source);
		MateriaSource(std::string type);
		~MateriaSource();
		MateriaSource		&operator=(MateriaSource const &materia_source);
		std::string const	&getName() const;
		void				setName(std::string name);
		AMateria			*getMateria(int index) const;
		void 				learnMateria(AMateria*);
		AMateria			*createMateria(std::string const &type);
};

#endif