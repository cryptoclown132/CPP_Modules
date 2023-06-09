/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:09:22 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/09 19:35:18 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "../inc/AForm.hpp"

class Intern
{
	private:
		AForm	*_makePresident(std::string target);
		AForm	*_makeRobot(std::string target);
		AForm	*_makeShrub(std::string target);
	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();
		Intern	&operator=(Intern const &intern);
		AForm	*makeForm(std::string form_name, std::string target);
};

#endif