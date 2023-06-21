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

class Awesome
{
  public:
    Awesome( void ) : _n( 42 ) { return; }
    int get( void ) const { return this->_n; }
  private:
    int _n;
};

std::ostream & operator<<( std::ostream & o, Awesome const & rhs )
{
  o << rhs.get();
  return o;
}

int main()
{
	std::string partition(50, '-');

	std::cout << partition << std::endl;
	std::cout << "INT\n";
	std::cout << partition << std::endl;
	{
		int	tab[6] = {12, 3432, -22, 23, 45, 120};
		iter(tab, 6, print);
	}

	std::cout << partition << std::endl;
	std::cout << "CONST CHAR *\n";
	std::cout << partition << std::endl;
	{
		const char *s[3] = {"jsda", "asd", "adsas"};
		iter(s, 3, print);
	}
  	
	std::cout << partition << std::endl;
	std::cout << "STRING\n";
	std::cout << partition << std::endl;
	{
		std::string	arr[5] = {"ab", "cd", "ef", "gh", "ij"};
		iter(arr, 5, print);
	}

	std::cout << partition << std::endl;
	std::cout << "Class\n";
	std::cout << partition << std::endl;
	{
		Awesome tab2[5];
		iter( tab2, 5, print<Awesome> );
	}
}
