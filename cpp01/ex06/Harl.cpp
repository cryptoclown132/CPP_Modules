
#include "Harl.hpp"


#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"; 
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n"; 
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n";
}

void	Harl::error(void)
{
	std::cout << "[ Error ]\n";
	std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void	Harl::complain(std::string level)
{
	void	(Harl::*func[]) (void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	int	i = 0;
	while ( i < 4 && levels[i] != level)
		i++;
	switch(i){
		case 0:
			(this->*func[i])();
			break ;
		case 1:
			(this->*func[i])();
			break ;
		case 2:
			(this->*func[i])();
			break ;
		case 3:
			(this->*func[i])();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}
