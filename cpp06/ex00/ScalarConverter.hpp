/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:47:04 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/31 18:08:24 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>
# include <cctype>
	

class ScalarConverter
{
	private:
		char	_c;
		int		_i;
		float	_f;
		double	_d;
		bool	_isChar(std::string convert);
		bool	_isInt(std::string convert);
		bool	_isFloat(std::string convert);
		bool	_isDouble(std::string convert);
		void	_specific_cases(std::string convert);
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &converter);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter const &converter);
		void			convert(std::string convert);

		char	getChar() const;
		int		getInt() const;
		float	getFloat() const;
		double	getDouble() const;
};

#endif