/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:25:50 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:25:50 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# include "AMateria.hpp"

class Cure : public AMateria
{
	public:
		Cure();
		Cure(Cure const &cure);
		Cure(std::string const & type);
		~Cure();
		Cure		&operator=(Cure const &cure);
		void		use(ICharacter& target);
		virtual AMateria*	clone() const;
};

#endif