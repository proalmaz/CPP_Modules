#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	string const	m_name;
	bool 			m_signStatus;
	int const		m_gradeForSign;
	int const		m_gradeForUse;

public:
	Form();
	Form(string name, int gradeForSign, int gradeForUse);
	Form(Form const &copy);
	~Form();

	Form	&operator=(Form const &copy);

	string	getName() const;
	int 	getGradeForSign() const;
	int 	getGradeForUse() const;
	bool	getSignStatus()	const;

	void 	beSigned(Bureaucrat const &src);

	class	GradeTooHighException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class	GradeTooLowException : public std::exception
	{
		virtual const char *what() const throw();
	};
	class	FormAlreadySigned : public std::exception
	{
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &src);