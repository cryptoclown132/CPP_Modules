/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:10:00 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/24 20:38:39 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
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
		AForm();
		AForm(AForm const &form);
		AForm(std::string name, int grade_signed, int grade_exec);
		~AForm();
		AForm				&operator=(AForm const &form);
		const std::string	getName() const;
		bool				getSigned() const;
		const int			getGradeSigned() const;
		const int			getGradeExec() const;
		void		beSigned(Bureaucrat const &bureaucrat);
		virtual void	execute(Bureaucrat const & executor) const = 0;
};
std::ostream	&operator<<(std::ostream &out, Form const &form);
#endif