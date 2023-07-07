/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:25:14 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/29 18:25:14 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP
# include <iostream>
# include <cctype>
# include <stack>
# include <string>
# include <exception>

int	getResult(std::string calculation);

class StackSizeNotEnoughException : public std::exception
{
	const char *what() const throw();
};

#endif