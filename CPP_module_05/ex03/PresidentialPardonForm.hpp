#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string m_target;

public:
	PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	virtual ~PresidentialPardonForm();

	PresidentialPardonForm	&operator=(PresidentialPardonForm const &copy);

	virtual void 	action() const;
	std::string 	getTarget() const;
};
