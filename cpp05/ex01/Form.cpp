/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:10:06 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/09 17:20:41 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("noname"), _signed(false), _grade_signed(75), _grade_exec(75)
{
	std::cout << "Form constructor called\n";
}

Form::Form(Form const &form) : _name(form.getName()), _grade_signed(form.getGradeSigned()), _grade_exec(form.getGradeExec())
{
	std::cout << "Form copy constructor called\n";
	*this = form;
}

Form::Form(std::string name, int grade_signed, int grade_exec) : _name(name), _signed(false), _grade_signed(grade_signed), _grade_exec(grade_exec)
{
	std::cout << "Form constructor with args called\n";
	try
	{
		if (this->_grade_signed > 150 || this->_grade_exec > 150)
			throw GradeTooLowException();
		else if (this->_grade_signed < 1 || this->_grade_exec < 1)
			throw GradeTooHighException();
	}
	catch(GradeTooHighException &e)
	{
		std::cerr << e.what();
	}
	catch(GradeTooLowException &e)
	{
		std::cerr << e.what();
	}
}

Form::~Form()
{
	std::cout << "Form destructor called\n";
}


Form	&Form::operator=(Form const &form)
{
	if (this == &form)
		return *this;
	this->_signed = form.getSigned();
	return *this;
}


const std::string	Form::getName() const{
	return this->_name;
}

bool	Form::getSigned() const{
	return this->_signed;
}

const int	Form::getGradeSigned() const{
	return this->_grade_signed;
}

const int	Form::getGradeExec() const{
	return this->_grade_exec;
}

std::ostream	&operator<<(std::ostream &out, Form const &form)
{
	out << "Name: " << form.getName() << ", Signed: " << form.getSigned() << ", Grade_Signed: " << form.getGradeSigned() << ", Grade_Exec: " << form.getGradeExec();
	return out;
}


const char	*Form::GradeTooHighException::what() const throw(){
	return "Grade too High!\n";
}

const char	*Form::GradeTooLowException::what() const throw(){
	return "Grade too Low!\n";
}

void	Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeSigned())
		this->_signed = true;
	else
		throw GradeTooLowException();
}
