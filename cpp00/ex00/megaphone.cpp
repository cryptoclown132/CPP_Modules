/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:27:47 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/11 14:27:47 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	lower_to_upper(char *str)
{
	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}
	std::cout << str;
}

int	main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (1);
	}
	for (int i = 1; argv[i]; i++)
		lower_to_upper(argv[i]);
	std::cout << std::endl;
}