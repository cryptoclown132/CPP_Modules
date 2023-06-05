/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 12:13:14 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/03 12:13:14 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


Base * generate(void)
{
	int rand_num = std::rand() % 3;

	if (rand_num == 0)
		return new A;
	else if (rand_num == 1)
		return new B;
	else
		return new C;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "P points to type A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "P points to type B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "P points to type B\n";
	else
		std::cout << "P points to unknown\n";
}

void identify(Base& p)
{
	try
	{
		A	&a = dynamic_cast<A&>(p);
		std::cout << "P points to type A\n";
	}
	catch(const std::exception& e){}
	try
	{
		B	&b = dynamic_cast<B&>(p);
		std::cout << "P points to type B\n";
	}
	catch(const std::exception& e){}
	try
	{
		C	&c = dynamic_cast<C&>(p);
		std::cout << "P points to type C\n";
	}
	catch(const std::exception& e){}
}
