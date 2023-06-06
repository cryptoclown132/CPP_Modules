/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:14:10 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 17:08:36 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"

class Cat : public Animal
{
	private:

	public:
		Cat();
		Cat(Cat const &cat);
		Cat(std::string type);
		~Cat();
		Cat	&operator=(Cat const &cat);
		void	makeSound() const;
};

#endif