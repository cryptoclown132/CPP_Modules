/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:16:32 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/05 09:16:33 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	protected:
		std::string	_wrong_type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &wrong_animal);
		WrongAnimal	&operator=(WrongAnimal const &wrong_animal);
		~WrongAnimal();
		virtual void	makeWrongSound();
		std::string		getWrongType(void) const;
		void			setWrongType(std::string wrong_type);
};

#endif