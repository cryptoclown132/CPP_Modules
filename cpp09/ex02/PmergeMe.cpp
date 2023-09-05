/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:44:48 by jkroger           #+#    #+#             */
/*   Updated: 2023/07/01 14:44:48 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &pmerge)
{
	*this = pmerge;
}

PmergeMe::~PmergeMe() {}

PmergeMe	&PmergeMe::operator=(PmergeMe const &pmerge)
{
	if (this == &pmerge)
		return *this;
	_time_vec = pmerge.getTimeVec();
	_time_lst = pmerge.getTimeLst();
	return *this;
}

double	PmergeMe::getTimeVec() const{
	return _time_vec;
}

double	PmergeMe::getTimeLst() const{
	return _time_lst;
}

void	PmergeMe::_insertionVec(std::vector<int>	&vec)
{
	for (int i = 0, j; i < vec.size() - 1;  i++)
	{
		j = i + 2;
		while (--j > 0 && vec[j - 1] > vec[j])
			std::swap(vec[j - 1], vec[j]);
	}
}

std::vector<int>	PmergeMe::_mergeVec(std::vector<int> &left, std::vector<int> &right)
{
	std::vector<int>	vec;
	while (!left.empty() && !right.empty())
	{
		if (left.front() > right.front())
		{
			vec.push_back(right.front());
			right.erase(right.begin());
		}
		else
		{
			vec.push_back(left.front());
			left.erase(left.begin());
		}
	}
	while (!left.empty())
	{
		vec.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		vec.push_back(right.front());
		right.erase(right.begin());
	}
	return vec;
}

std::vector<int>	PmergeMe::_mergeInsertVec(std::vector<int> &vec)
{
	if (vec.size() < 100)
	{
		_insertionVec(vec);
		return vec;
	}
	size_t	mid = vec.size() / 2;
	std::vector<int>	left(vec.begin(), vec.begin() + mid);
	std::vector<int>	right(vec.begin() + mid, vec.end());
	_mergeInsertVec(left);
	_mergeInsertVec(right);
	vec = _mergeVec(left, right);
	return (vec);
}

void	PmergeMe::_insertionLst(std::list<int>	&lst)
{
	for (std::list<int>::iterator it = std::next(lst.begin()); it != lst.end();  ++it)
	{
		std::list<int>::iterator	curr_it = it;
		std::list<int>::iterator	prev_it = std::prev(it);
		while (curr_it != lst.begin() && *curr_it < *prev_it)
			std::iter_swap(prev_it--, curr_it--);
	}
	
}

std::list<int>	PmergeMe::_mergeLst(std::list<int> &left, std::list<int> &right)
{
	std::list<int>	lst;
	while (!left.empty() && !right.empty())
	{
		if (left.front() > right.front())
		{
			lst.push_back(right.front());
			right.erase(right.begin());
		}
		else
		{
			lst.push_back(left.front());
			left.erase(left.begin());
		}
	}
	while (!left.empty())
	{
		lst.push_back(left.front());
		left.erase(left.begin());
	}
	while (!right.empty())
	{
		lst.push_back(right.front());
		right.erase(right.begin());
	}
	return lst;
}

std::list<int>	PmergeMe::_mergeInsertLst(std::list<int> &lst)
{
	if (lst.size() < 100)
	{
		_insertionLst(lst);
		return lst;
	}
	int	mid = lst.size() / 2;
	std::list<int>::iterator	half = lst.begin();
	while (--mid >= 0)
		half++;
	std::list<int>	left;
	std::list<int>	right;
	left.splice(left.end(), lst, lst.begin(), half);
	right.splice(right.end(), lst, half, lst.end());
	_mergeInsertLst(left);
	_mergeInsertLst(right);
	lst = _mergeLst(left, right);
	return (lst);
}

bool	PmergeMe::_checkDuplicates(const std::list<int> lst)
{
    std::list<int> tmp = lst;
    tmp.sort();
    tmp.unique();
    return lst.size() != tmp.size();
}

void	PmergeMe::createContainers(std::vector<int> &vec, std::list<int> &lst, char **argv)
{
	for (int i = 1; argv[i]; i++)
	{
		if (std::string(argv[i]).find_first_not_of("0123456789") != std::string::npos || strlen(argv[i]) > 10)
			throw ArgumentIsNotANumberException();
		if (atol(argv[i]) > std::numeric_limits<int>::max())
			throw ArgumentIsNotANumberException();
		vec.push_back(atoi(argv[i]));
		lst.push_back(atoi(argv[i]));
	}
	if (_checkDuplicates(lst))
		throw DuplicateInArgumentsException();
}

void	PmergeMe::iterateVec(std::vector<int> vec)
{
	for (int i = 0; i < vec.size(); i++)
		std::cout << vec[i] << " ";
	std::cout << std::endl;
}

void	PmergeMe::iterateLst(std::list<int> lst)
{
	std::list<int>::const_iterator	it;
	for (it = lst.begin(); it != lst.end(); ++it)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void	PmergeMe::sortTime(std::vector<int> &vec, std::list<int> &lst)
{
	clock_t start = clock();
	_mergeInsertVec(vec);
	_time_vec = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000.0;
	start = clock();
	_mergeInsertLst(lst);
	_time_lst = static_cast<double>(clock() - start) / CLOCKS_PER_SEC * 1000.0;
}

const char	*PmergeMe::ArgumentIsNotANumberException::what() const throw(){
	return "Argument List Contains a non number argument.";
}

const char	*PmergeMe::DuplicateInArgumentsException::what() const throw(){
	return "Argument List has a duplicate.";
}
