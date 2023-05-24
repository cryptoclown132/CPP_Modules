/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:00:52 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 20:00:52 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileData.hpp"

int	check_number_of_args(int argc)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments. Has to be 4!\n";
		return 1;
	}
	return 0;
}

int	main(int argc, char *argv[])
{
	if (check_number_of_args(argc))
		return (1);
	FileData	file(argv[1]);
	file.replace(argv[2], argv[3]);
}