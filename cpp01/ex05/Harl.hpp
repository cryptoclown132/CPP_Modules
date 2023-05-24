/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:01:13 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 20:01:13 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
# include <iostream>
# include <string>

class Harl
{
private:
	void	_debug();
	void	_info();
	void	_warning();
	void	_error();
public:
	void complain(std::string level);
	Harl();
	~Harl();
};

#endif