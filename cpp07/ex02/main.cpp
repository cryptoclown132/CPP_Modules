/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 11:59:09 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/11 11:59:09 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>
#include <string>

int main()
{
	Array<int> argh(4);
	try
	{
		argh[6];
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}	
}