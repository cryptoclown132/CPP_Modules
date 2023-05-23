/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 12:38:17 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/23 12:38:17 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("noname"), _grade(75)
{
	std::cout << "Bureaucrat constructor called\n";
}
		
Bureaucrat::Bureaucrat(Bureaucrat const &bureaucrat)
{
	std::cout << "Bureaucrat copy constructor called\n";
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called\n";
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	std::cout << "Bureaucrat constructor with args called\n";
	try
	{
		if (grade > 150)
			throw GradeTooLowException();
		else if (grade < 1)
			throw GradeTooHighException();
		else
			this->_grade = grade;
	}
	catch(GradeTooHighException &e)
	{
		std::cerr << e.what();
		this->_grade = 1;
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << e.what();
		this->_grade = 150;
	}
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &bureaucrat)
{
	if (this == &bureaucrat)
		return *this;
	this->_grade = bureaucrat.getGrade();
	return *this;
}

int	Bureaucrat::getGrade() const{
	return this->_grade;
}

const std::string	Bureaucrat::getName() const{
	return this->_name;
}

void	Bureaucrat::incrementGrade()
{
	if (this->_grade != 1)
		this->_grade--;
}

void	Bureaucrat::decrementGrade()
{
	if (this->_grade != 150)
		this->_grade++;
}

std::ostream	&operator<<(std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "Bureaucrat name is: " << bureaucrat.getName() << ", Grade is: " << bureaucrat.getGrade() << std::endl;
	return out;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Grade is too high can only be between 1 and 150!\n";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Grade is too low can only be between 1 and 150!\n";
}

void	Bureaucrat::signForm(Form &form) const{
	if (form.getSigned())
	{
		std::cout << "Form already signed\n";
		return ;
	}
	try 
	{
		form.beSigned(*this);
	}
	catch (Form::GradeTooLowException &e)
	{
		std::cerr << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}
