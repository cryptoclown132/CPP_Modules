/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:16:09 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:16:10 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <string>
# include <iostream>

class Animal
{
	private:

	protected:
		std::string	_type;
	public:
		Animal();
		Animal(std::string type);
		Animal(Animal const &animal);
		virtual ~Animal();
		Animal	&operator=(Animal const &animal);
		void		setType(std::string type);
		std::string	getType(void) const;
		virtual void	makeSound() const;
};

#endif
