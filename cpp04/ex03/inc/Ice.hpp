/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:25:56 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:25:56 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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