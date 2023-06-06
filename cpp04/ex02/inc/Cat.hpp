/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:21:23 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 19:30:35 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
		Cat(std::string name);
		~Cat();
		Cat			&operator=(Cat const &cat);
		void		makeSound() const;
		void		setIdeas(int index, std::string idea);
		std::string	getIdeas(int index);
		//insert_ideas
};

#endif
