/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:10:00 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/23 20:33:28 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_grade_signed;
		const int			_grade_exec;
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
		Form();
		Form(Form const &form);
		Form(std::string name, int grade_signed, int grade_exec);
		~Form();
		Form				&operator=(Form const &form);
		const std::string	getName() const;
		bool				getSigned() const;
		const int			getGradeSigned() const;
		const int			getGradeExec() const;
		void		beSigned(Bureaucrat const &bureaucrat);
};
std::ostream	&operator<<(std::ostream &out, Form const &form);
#endif