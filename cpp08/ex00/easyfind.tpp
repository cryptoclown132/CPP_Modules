/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:50:08 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/14 12:50:08 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	easyfind(T &container, int find)
{
	typename T::iterator it = std::find(container.begin(), container.end(), find);
	if (it == container.end())
		throw NotInContainerException();
	else
		std::cout << find << " is inside the container" << std::endl;
}

const char *NotInContainerException::what() const throw()
{
	return "Could not find an occurance of the value in the container!";
}
