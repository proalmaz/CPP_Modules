#include "Intern.hpp"

Intern::Intern()
{
	m_arrayForm[0].s_formName = SHRUBBERY;
	m_arrayForm[1].s_formName = PRESIDENTIAL;
	m_arrayForm[2].s_formName = ROBOTOMY;
	m_arrayForm[0].f = &Intern::createShrubbery;
	m_arrayForm[1].f = &Intern::createPresidential;
	m_arrayForm[2].f = &Intern::createRobotomy;
}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

Intern::~Intern() {}

Form	*Intern::createShrubbery(const string &target)
{
	return new ShrubberyCreationForm(target);
}

Form	*Intern::createPresidential(const string &target)
{
	return new PresidentialPardonForm(target);
}

Form	*Intern::createRobotomy(const std::string &target)
{
	return new RobotomyRequestForm(target);
}

const char *Intern::notFindNameException::what() const throw()
{
	return "I don't know this name of form";
}

Form					*Intern::makeForm(const string &nameForm,
										  const string &target)
{
	for (int i = 0; i < 3; ++i)
	{
		if (m_arrayForm[i].s_formName == nameForm)
			return (this->*m_arrayForm[i].f)(target);
	}
	throw notFindNameException();
}