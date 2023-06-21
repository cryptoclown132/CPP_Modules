/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/17 13:36:36 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/17 13:36:36 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP
# include <iostream>
# include <cmath>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int		_N;
		std::vector<int>	_arr;
	public:
		Span();
		Span(Span const &span);
		Span(unsigned int N);
		~Span();
		Span				&operator=(Span const &span);
		void				addNumber(int i);
		void				addNumber(std::vector<int> v);
		int					shortestSpan();
		int					longestSpan();
		unsigned int		getAmount() const;
		std::vector<int>	getArray() const;
		class ContainerFullException : public std::exception
		{
			virtual const char	*what() const throw();
		};
		class NotEnoughElementsException : public std::exception
		{
			virtual const char	*what() const throw();
		};
};

#endif