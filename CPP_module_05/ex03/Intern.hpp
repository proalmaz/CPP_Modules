#pragma once

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

#ifndef SHRUBBERY
# define SHRUBBERY "shrubbery creation"
#endif

#ifndef PRESIDENTIAL
# define PRESIDENTIAL "presidential pardon"
#endif

#ifndef ROBOTOMY
# define ROBOTOMY "robotomy request"
#endif

class Intern
{
private:
	struct s_Form
	{
		std::string	s_formName;
		Form		*(Intern::*f)(string const &target);
	};
	s_Form m_arrayForm[3];

public:
	Intern();
	Intern(Intern const &copy);
	~Intern();

	Form	*createShrubbery(const string &target);
	Form	*createPresidential(const string &target);
	Form	*createRobotomy(const std::string &target);
	Form	*makeForm(string const &nameForm, string const &target);

	class 	notFindNameException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
