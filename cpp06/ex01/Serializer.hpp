/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 09:55:20 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/02 09:55:20 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP
# include <cstdint>
# include <string>

typedef struct Data{
	int			age;
	std::string	name;
}Data;

class  Serializer
{
	private:

	public:
		Serializer();
		Serializer(Serializer const &serial);
		~Serializer();
		Serializer	&operator=(Serializer const &serial);
		uintptr_t serialize(Data* ptr);
		Data* deserialize(uintptr_t raw);
};

#endif