#include "ClapTrap.hpp"

ClapTrap::ClapTrap(string name) : m_name(name), m_attackDamage(0),
m_energyPoints(10), m_hitPoints(10)
{
	cout << "Name constructor for " << m_name << " for class ClapTrap called"
	<< endl;
}

ClapTrap::ClapTrap(string name, int HP, int EP, int AD) : m_name(name),
m_hitPoints(HP), m_energyPoints(EP), m_attackDamage(AD)
{
	cout << "Full data constructor for ClapTrap called" << endl;
}

ClapTrap::~ClapTrap()
{
	cout << "Destructor in ClapTrap for " << m_name << " called" << endl;
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamage = copy.m_attackDamage;
	m_name = copy.m_name;
}

ClapTrap &ClapTrap::operator=(ClapTrap &copy)
{
	m_hitPoints = copy.m_hitPoints;
	m_energyPoints = copy.m_energyPoints;
	m_attackDamage = copy.m_attackDamage;
	m_name = copy.m_name;
	return *this;
}

void ClapTrap::attack(const string &target)
{
	cout << "ClapTrap " << m_name << " attack " << target << " causing " <<
	m_attackDamage << " points of damage!" << endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (m_hitPoints <= amount)
		m_hitPoints = 0;
	else
		m_hitPoints -= amount;
	cout << "ClapTrap " << m_name << " take " << amount << " points of damage!" <<
	endl;
	cout << "HP left = " << m_hitPoints << endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	m_hitPoints += amount;
	cout << "ClapTrap " << m_name << " take " << amount << " points of heal!" <<
	endl;
}

string	ClapTrap::getName() const { return m_name; }

int 	ClapTrap::getHP() const { return m_hitPoints; }

int 	ClapTrap::getEP() const { return m_energyPoints; }

int 	ClapTrap::getAD() const { return m_attackDamage; }

std::ostream &operator<<(std::ostream &out, ClapTrap &src)
{
	out << "Name is " << src.getName() << endl <<
	"Hit Points = " << src.getHP() << endl <<
	"Energy Points = " << src.getEP() << endl <<
	"Attack Damage = " << src.getAD() << endl;
	return out;
}