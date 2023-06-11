/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:09:18 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/10 19:09:18 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>
#include <string>

template <typename T>
void	iter(T *a, size_t length, void (*f)(T const &))
{
	for (size_t i = 0; i < length; i++)
		f(a[i]);
}

template <typename T>
void	print(T const &out)
{
	std::cout << out << std::endl;
}

#endif