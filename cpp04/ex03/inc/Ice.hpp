#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
	public:
		Ice();
		Ice(Ice const &ice);
		Ice(std::string const & type);
		~Ice();
		Ice					&operator=(Ice const &ice);
		void				use(ICharacter& target);
		virtual AMateria*	clone() const;

};

#endif