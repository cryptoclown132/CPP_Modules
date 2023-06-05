/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:59:34 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/02 09:59:34 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}


Serializer::Serializer(Serializer const &serial)
{
	*this = serial;
}

Serializer::~Serializer() {}
		
Serializer	&Serializer::operator=(Serializer const &serial)
{
	*this = serial;
	return *this;
}
	
uintptr_t	Serializer::serialize(Data* ptr)
{
	uintptr_t convert = reinterpret_cast<uintptr_t>(ptr);
	return convert;
}
	
Data	*Serializer::deserialize(uintptr_t raw)
{
	Data	*convert = reinterpret_cast<Data*>(raw);
	return convert;
}
