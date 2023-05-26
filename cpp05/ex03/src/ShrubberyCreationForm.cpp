/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkroger <jkroger@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 20:52:14 by jkroger           #+#    #+#             */
/*   Updated: 2023/05/26 15:58:32 by jkroger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Shrubbery Creation", 145, 137, "nothing")
{
	std::cout << "shrub constructor called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery Creation", 145, 137, target)
{
	std::cout << "shrub constructor with target called\n";
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &shrub)
: AForm(shrub.getName(), shrub.getGradeSigned(), shrub.getGradeExec(), shrub.getTarget())
{
	std::cout << "shrub copy constructor called\n";
	*this = shrub;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "shrub destructor called\n";
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &shrub)
{
	if (this == &shrub)
		return *this;
	this->setTarget(shrub.getTarget());
	this->setSigned(shrub.getSigned());
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (!execRequierments(executor))
		return ;
	std::ofstream	out_file(getTarget() + "_shrubbery");
	if (out_file.is_open())
	{
		out_file << "           .        +          .      .          .		" << std::endl;
        out_file << "     .            _        .                    . 		" << std::endl;
        out_file << "  ,              /;-._,-.____        ,-----.__    		" << std::endl;
        out_file << " ((        .    (_:#::_.:::. `-._   /:, /-._, `._,		" << std::endl;
        out_file << "  `                     _|`=:_::.`.    _          		" << std::endl;
        out_file << "                      ,    `./   :. `.   )==-'  . 		" << std::endl;
        out_file << "    .      ., ,-=-.  , , +#./`    :.  / /         		" << std::endl;
        out_file << ".            /:/`-' , ,  '` ` `   ): , /_  -o	   		" << std::endl;
        out_file << "       .    /:+- - + +- : :- + + -:'  /(o-)  )    		" << std::endl;
        out_file << "  .      ,=':       ` `/` ' , , ,:' `'-- .-- ---._/`7	" << std::endl;
        out_file << "   `.   (     :  ,-._` ` + ' , ,    _,--._,--- :.__/ 	" << std::endl;
        out_file << "               :  `  X` _| _, /'   .-'				  	" << std::endl;
        out_file << ".                :._:` ____  /:'  /      .           	" << std::endl;
        out_file << "                     ::.  : /:'  /              +	  	" << std::endl;
        out_file << "   .                 `.:.  /:'  }      .			  	" << std::endl;
        out_file << "           .           ):_(:;               .		  	" << std::endl;
        out_file << "                      /:. _/ ,  |					  	" << std::endl;
        out_file << "                   . (|::.     ,`                  . 	" << std::endl;
        out_file << "     .                |::.    { 					  	" << std::endl;
        out_file << "                      |::.     `.					  	" << std::endl;
        out_file << "                      |:::(     |					  	" << std::endl;
        out_file << "              O       |:::/{ }  |                  (o	" << std::endl;
        out_file << "               )  ___/# ::`/ (O  ==._____   O, (O  /`	" << std::endl;
        out_file << "          ~~~w/w~ ~~, ` `:/,-(~` ~~~~~~~~ ~o~ ~/~w|/~	" << std::endl;
        out_file << "     ~~~~~~~~~~~~~~~~~~~~~~~ W~~~~~~~~~~~~ |/~~	  	";
        out_file.close();
	}
	else
		std::cerr << "Could not open the file\n";
}
