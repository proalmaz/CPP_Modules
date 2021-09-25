#pragma once

#include "Animal.hpp"

class Brain
{
private:
	string	*m_ideas;

	void 	setIdea(string idea);
	void 	copyIdeas(string *ideas);

public:
	Brain();
	Brain(string &idea);
	Brain(Brain &copy);
	~Brain();

	Brain	&operator=(Brain &copy);
	string	*getIdeas(void);
};
