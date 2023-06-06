/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 09:21:36 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/06 17:22:34 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(WrongCat const &wrong_cat);
		WrongCat(std::string type);
		WrongCat	&operator=(WrongCat const &wrong_cat);
		~WrongCat();
		void	makeWrongSound();
};


#endif