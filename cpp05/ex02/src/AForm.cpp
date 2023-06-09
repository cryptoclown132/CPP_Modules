/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:10:06 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/12 18:36:48 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AForm.hpp"

AForm::AForm() : _name("noname"), _signed(false), _grade_signed(75), _grade_exec(75), _target("notarget")
{
	std::cout << "Form constructor called\n";
}

AForm::AForm(AForm const &form) : _name(form.getName()), _grade_signed(form.getGradeSigned()), _grade_exec(form.getGradeExec())
{
	std::cout << "Form copy constructor called\n";
	*this = form;
}

AForm::AForm(std::string name, int grade_signed, int grade_exec, std::string target) : _name(name), _signed(false), _grade_signed(grade_signed)
	, _grade_exec(grade_exec), _target(target)
{
	std::cout << "Form constructor with args called\n";
	if (this->_grade_signed > 150 || this->_grade_exec > 150)
		throw GradeTooLowException();
	else if (this->_grade_signed < 1 || this->_grade_exec < 1)
		throw GradeTooHighException();
}

AForm::~AForm()
{
	std::cout << "Form destructor called\n";
}


AForm	&AForm::operator=(AForm const &form)
{
	if (this == &form)
		return *this;
	_target = form.getTarget();
	_signed = form.getSigned();
	return *this;
}


const std::string	AForm::getName() const{
	return _name;
}

bool	AForm::getSigned() const{
	return _signed;
}

const int	AForm::getGradeSigned() const{
	return _grade_signed;
}

const int	AForm::getGradeExec() const{
	return _grade_exec;
}

std::ostream	&operator<<(std::ostream &out, AForm const &form)
{
	out << "Name: " << form.getName() << ", Signed: " << form.getSigned() << ", Grade_Signed: " << form.getGradeSigned() << ", Grade_Exec: " << form.getGradeExec();
	return out;
}


const char	*AForm::GradeTooHighException::what() const throw(){
	return "Grade too High!";
}

const char	*AForm::GradeTooLowException::what() const throw(){
	return "Grade too Low!";
}

const char	*AForm::FormNotSignedException::what() const throw(){
	return "Form is not signed!";
}

void	AForm::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() <= this->getGradeSigned())
		this->_signed = true;
	else
		throw GradeTooLowException();
}

std::string		AForm::getTarget() const{
	return _target;
}

bool	AForm::execRequierments(Bureaucrat const &bureau) const{
	if (!getSigned())
	{
		throw FormNotSignedException();
		return false;
	}
	if (getGradeExec() < bureau.getGrade())
	{
		throw GradeTooLowException();
		return false;
	}
	return true;
}

void	AForm::setTarget(std::string target)
{
	_target = target;
}

void	AForm::setSigned(bool is_signed)
{
	_signed = is_signed;
}
