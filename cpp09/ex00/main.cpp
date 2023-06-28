/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:56:32 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/23 14:56:32 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cerr << "Program takes needs one argument only!\n";
		return 1;
	}
	BitcoinExchange	btc;
	btc.calculateValue(argv[1]);
	// try
	// {

	// }
	// catch(std::exception &e)
	// {
		
	// }
}