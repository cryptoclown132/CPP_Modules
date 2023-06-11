/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 10:16:53 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/11 10:16:53 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
#include <exception>

template <typename T>
class Array
{
	private:
		T				*_arr;
		unsigned int	_size;
	public:
		Array();
		Array(unsigned int);
		Array(Array const &array);
		Array			&operator=(Array const &array);
		T				&operator[](unsigned int index) const;
		unsigned int	size() const;
		class OutOfBoundsException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
};

#include "Array.tpp"

#endif