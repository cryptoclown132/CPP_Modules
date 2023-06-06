/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:21:32 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 17:22:24 by jkroger          ###   ########.fr       */
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
		WrongAnimal(std::string type);
		WrongAnimal	&operator=(WrongAnimal const &wrong_animal);
		virtual ~WrongAnimal();
		virtual void	makeWrongSound();
		std::string		getWrongType(void) const;
		void			setWrongType(std::string wrong_type);
};

#endif