/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 19:19:25 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/10 19:19:25 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main()
{
	std::string	arr[5] = {"ab", "cd", "ef", "gh", "ij"};
	iter(arr, 5, print);

	int	brr[6] = {12, 3432, -22, 23, 45, 120};
	iter(brr, 6, print);
}
