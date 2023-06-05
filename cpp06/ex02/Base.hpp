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
# include <ctime>

class Base
{
	public:
		virtual		~Base();
};

class A : public Base
{
	~A();
};

class B : public Base
{
	~B();
};

class C : public Base
{
	~C();
};

Base	*generate(void);
void	identify(Base* p);
void	identify(Base& p);

#endif