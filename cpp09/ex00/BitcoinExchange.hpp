/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:44:02 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/23 14:44:02 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP
# include <iostream>
# include <string>
# include <map>
# include <fstream>
# include <sstream>
# include <exception>
# include <cctype>

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_bitcoin_db;
		void							_creatDataBase();
		int								_validDate(std::string date);
		int								_validAmount(float amount) const;
		void							_validStream(std::ifstream &infile) const;
		int								_validInput(std::string line, size_t delim);
		int								_validInput_2(std::string line, size_t delim);
		void							_printOutValue(std::string date, float amount);
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &bitcoin);
		~BitcoinExchange();
		BitcoinExchange	&operator=(BitcoinExchange const &bitcoin);
		void			calculateValue(char *file);
};

#endif