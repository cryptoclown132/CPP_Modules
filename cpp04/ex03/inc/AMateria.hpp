/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:25:38 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:25:38 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP
# include <string>
# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(AMateria const &amateria);
		~AMateria();
		AMateria(std::string const & type);
		AMateria			&operator=(AMateria const &amateria);
		std::string const	&getType() const;
		void				setType(std::string amateria);
		virtual AMateria*	clone() const = 0;
		virtual void		use(ICharacter& target);
};

#endif