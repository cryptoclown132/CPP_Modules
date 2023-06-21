/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:33:13 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/14 12:33:13 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <algorithm>

template <typename T>
void	easyfind(T &container, int find);


class NotInContainerException : public std::exception
{
	public:
		virtual const char *what() const throw();
};

#include "easyfind.tpp"

#endif