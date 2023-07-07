/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:24:58 by jkroger           #+#    #+#             */
/*   Updated: 2023/06/29 18:24:58 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

const char	*StackSizeNotEnoughException::what() const throw(){
	return "Stack size is not enough to do a calculation.";
}

void	doCalculation(std::stack<int> &polish, const char op)
{
	int	left, right;

	if (polish.size() < 2)
		throw StackSizeNotEnoughException();
	right = polish.top();
	polish.pop();
	left = polish.top();
	polish.pop();
	if (op == '+')
		polish.push(left + right);
	else if (op == '-')
		polish.push(left - right);
	else if (op == '*')
		polish.push(left * right);
	else
		polish.push(left / right);
}

int	getResult(std::string calculation)
{
	std::stack<int>	polish;

	for (int i = 0; calculation[i]; i++)
	{
		if (calculation[i] == ' ')
			continue;
		if (std::isdigit(calculation[i]))
			polish.push(calculation[i] - '0');
		else if(calculation[i] == '+' || calculation[i] == '-' || calculation[i] == '*' || calculation[i] == '/')
			doCalculation(polish, calculation[i]);
		else
			throw std::invalid_argument("Error");
	}
	if (polish.size() != 1)
		throw StackSizeNotEnoughException();
	return polish.top();
}
