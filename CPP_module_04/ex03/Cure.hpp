#pragma once

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &copy);
	virtual ~Cure();

	Cure	&operator=(Cure const &copy);

	virtual AMateria	*clone() const;
	virtual void 		use(ICharacter &target);
};
