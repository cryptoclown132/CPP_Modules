/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:14:17 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:14:18 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"

class Dog : public Animal
{
	private:

	public:
		Dog();
		Dog(Dog const &dog);
		~Dog();
		Dog	&operator=(Dog const &dog);
		void	makeSound() const;
};

#endif