/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:09:22 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/26 16:56:09 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP
# include "../inc/AForm.hpp"

class Intern
{
	private:

	public:
		Intern();
		Intern(Intern const &intern);
		~Intern();
		Intern	&operator=(Intern const &intern);
		AForm	*makeForm(std::string form_name, std::string target);
		AForm	*makePresident(std::string target);
		AForm	*makeRobot(std::string target);
		AForm	*makeShrub(std::string target);
};

#endif