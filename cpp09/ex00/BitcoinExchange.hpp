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

class BitcoinExchange
{
	private:
		std::map<std::string, float>	_bitcoin_db;
		void			_creatDataBase();
	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange const &bitcoin);
		~BitcoinExchange();
		BitcoinExchange	&operator=(BitcoinExchange const &bitcoin);
		void			calculateValue(char *file);
		int				validDate(std::string date);
		void			printOutValue(std::string date, float amount);
};

#endif