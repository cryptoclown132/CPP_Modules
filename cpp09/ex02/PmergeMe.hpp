/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 12:27:43 by jkroger           #+#    #+#             */
/*   Updated: 2023/07/01 12:27:43 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP
# include <iostream>
# include <cstdlib>
# include <string>
# include <vector>
# include <list>
# include <algorithm>
# include <iterator>
# include <ctime>
# include <exception>
# include <iomanip>
# include <limits>

class PmergeMe
{
	private:
		double				_time_vec;
		double				_time_lst;
		void				_insertionVec(std::vector<int>	&vec);
		void				_insertionLst(std::list<int>	&vec);
		std::vector<int>	_mergeVec(std::vector<int> &left, std::vector<int> &right);
		std::list<int>		_mergeLst(std::list<int> &left, std::list<int> &right);
		std::vector<int>	_mergeInsertVec(std::vector<int> &vec);
		std::list<int>		_mergeInsertLst(std::list<int> &vec);
		bool				_checkDuplicates(const std::list<int> lst);	
	public:
		PmergeMe();
		PmergeMe(PmergeMe const &pmerge);
		~PmergeMe();
		PmergeMe			&operator=(PmergeMe const &pmerge);
		double				getTimeVec() const;
		double				getTimeLst() const;
		void				iterateVec(std::vector<int> vec);
		void				iterateLst(std::list<int> lst);
		void				createContainers(std::vector<int> &vec, std::list<int> &lst, char **argv);
		void				sortTime(std::vector<int> &vec, std::list<int> &lst);
	class ArgumentIsNotANumberException : public std::exception
	{
		virtual const char	*what() const throw();
	};
	class DuplicateInArgumentsException : public std::exception
	{
		virtual const char	*what() const throw();
	};
};

#endif