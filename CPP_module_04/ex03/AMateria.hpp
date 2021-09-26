#pragma once

#include <iostream>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class ICharacter;

class AMateria
{
protected:
	string	m_type;

public:
	AMateria();
	AMateria(string const &type);
	AMateria(AMateria const &copy);
	virtual ~AMateria();

	AMateria			&operator=(AMateria const &copy);

	string const		&getType() const;
	virtual AMateria	*clone() const = 0;
	virtual void 		use(ICharacter &target);

};
