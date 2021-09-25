#include "Brain.hpp"

Brain::Brain() : m_ideas(new string[100])
{
	cout << "Default constructor for Brain called" << endl;
	setIdea("empty");
}

Brain::Brain(Brain &copy) : m_ideas(new string[100])
{
	cout << "Copy constructor for Brain called" << endl;
	*this = copy;
}

Brain::Brain(string &idea)
{
	cout << "Idea constructor for Brain called" << endl;
	setIdea(idea);
}

Brain::~Brain()
{
	cout << "Default destructor for Brain called" << endl;
	delete []m_ideas;
}

Brain &Brain::operator=(Brain &copy)
{
	cout << "Assignation operator overload for Brain called" << endl;
	copyIdeas(copy.getIdeas());
	return *this;
}

string	*Brain::getIdeas() { return m_ideas; }

void 	Brain::setIdea(string idea)
{
	for (int i = 0; i < 100; ++i)
		m_ideas[i] = "some idea";
}

void 	Brain::copyIdeas(string *ideas)
{
	for (int i = 0; i < 100; ++i)
		m_ideas[i] = ideas[i];
}