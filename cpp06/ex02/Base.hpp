/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:40:18 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/02 10:40:18 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
# define BASE_HPP
# include <cstdlib>
# include <iostream>

class Base
{
	public:
		virtual		~Base();
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif