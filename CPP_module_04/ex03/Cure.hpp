#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(Cure const &copy);
	~Cure();

	Cure	&operator=(Cure const &copy);
	virtual AMateria	*clone() const;
	virtual void 		use(ICharacter &target);
};
