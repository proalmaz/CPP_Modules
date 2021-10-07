#pragma once

#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string m_target;

public:
	ShrubberyCreationForm();
	ShrubberyCreationForm(string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	virtual ~ShrubberyCreationForm();

	ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &copy);

	virtual void 	action() const;
	std::string 	getTarget() const;

	class ShrubberyCreationFormException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};
