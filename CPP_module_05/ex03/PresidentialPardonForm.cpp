#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential", 25, 5)
{
	m_target = "Presidential";
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) :
Form("Presidential" ,25, 5)
{
	m_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(
		const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm	&PresidentialPardonForm::operator=(
		const PresidentialPardonForm &copy)
{
	if (this == &copy)
		return *this;
	m_target = copy.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const { return m_target; }

void 	PresidentialPardonForm::action() const
{
	cout << m_target << " has been pardoned by Zafod Beeblebrox" << endl;
}