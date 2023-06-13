/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 10:03:41 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/02 10:03:41 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>

int	main()
{
	Serializer	seri;
	Data		serialized;
	serialized.name = "jon";
	serialized.age = 30;
	uintptr_t i = seri.serialize(&serialized);
	std::cout << "i: " << i << std::endl; 
	Data	*deserialized = seri.deserialize(i);
	std::cout << "name: " << deserialized->name << std::endl;
	std::cout << "age: " << deserialized->age << std::endl;
}