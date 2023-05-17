
#include "Harl.hpp"

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		std::cout << "Has to be exactly 2 arguments!\n";
		return 1;
	}
	Harl	harl;
	harl.complain(argv[1]);
}