
#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	clap("clappy");
	ClapTrap	trap("trappy");
//if clap attacks trap has to lose points
	clap.setAttackDamage(2);
	for (int i = 0; i < 11; i++)
		clap.attack("trappy");
	trap.operator=(clap);
	trap.attack("clappy");
	for (int i = 0; i < 5; i++)
	{
		trap.takeDamage(2);
	}
	trap.beRepaired(5);
}