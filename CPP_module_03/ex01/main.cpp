#include "ScavTrap.hpp"

int main()
{
	ScavTrap none;
	ScavTrap mick("Micky");

	std::cout << endl << none << std::endl;
	std::cout << mick << std::endl;

	none.attack("Micky");
	cout << endl;
	mick.takeDamage(none.getAD());
	cout << endl;
	mick.beRepaired(13);
	cout << endl;

	std::cout << none << std::endl;
	std::cout << mick << std::endl;


	std::cout << std::endl;

	mick.guardGate();

	std::cout << std::endl;
	std::cout << "####################Destructors#####################" << std::endl;
	std::cout << std::endl;
	return (0);
}
