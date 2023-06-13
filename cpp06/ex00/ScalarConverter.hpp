/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 18:47:04 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/13 22:25:03 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP
# include <string>
# include <iostream>
# include <cctype>
# include <cstring>


class ScalarConverter
{
	private:
		static char	_c;
		static int		_i;
		static float	_f;
		static double	_d;
		static bool	_isChar(std::string convert);
	 	static bool	_isInt(std::string convert);
		static bool	_isFloat(std::string convert);
		static bool	_isDouble(std::string convert);
		static void	_specific_cases(std::string convert);
		static bool	_error(std::string convert);
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter const &converter);
		~ScalarConverter();
		ScalarConverter	&operator=(ScalarConverter const &converter);
		static void			convert(std::string convert);

		char	getChar() const;
		int		getInt() const;
		float	getFloat() const;
		double	getDouble() const;
};

#endif