#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice const &copy);
	virtual ~Ice();

	Ice	&operator=(Ice const &copy);

	virtual AMateria	*clone() const;
	virtual void 		use(ICharacter &target);
};
