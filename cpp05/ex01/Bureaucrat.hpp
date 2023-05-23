/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:35:34 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/23 12:35:34 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{
	private:
		const std::string	_name;
		int					_grade;
	public:
		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char	*what() const throw();
		};
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat const &bureaucrat);
		Bureaucrat(std::string name, int grade);
		Bureaucrat	&operator=(Bureaucrat const &bureaucrat);
		int	getGrade() const;
		const std::string	getName() const;
		void	incrementGrade();
		void	decrementGrade();
		void	signForm(Form &form) const;
};

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat);



#endif