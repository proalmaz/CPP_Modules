#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	FragTrap o;
	FragTrap stan("Stanly");
	FragTrap bob("BOB Wans");
	FragTrap copyStan(stan);

	cout << o << endl;
	cout << stan << endl;
	cout << bob << endl;

	cout << copyStan << endl;
	copyStan = o;
	cout << copyStan << endl;

	stan.beRepaired(100);
	cout << stan << endl;
	bob.attack("Stanly");
	stan.takeDamage(bob.getAD());
	cout << stan << endl;
	copyStan.highFivesGuys();

	cout << endl;
	cout << "####################Destructors#####################" << endl;
	cout << endl;
	return (0);
}
