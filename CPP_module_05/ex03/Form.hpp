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
	virtual ~Form();

	Form	&operator=(Form const &copy);

	string	getName() const;
	int 	getGradeForSign() const;
	int 	getGradeForUse() const;
	bool	getSignStatus()	const;

	void 	beSigned(Bureaucrat const &src);
	void	execute(Bureaucrat const & executor) const;
	virtual void		action(void) const = 0;

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
	class FormUnsignedException : public std::exception
	{
	public:
		virtual const char *	what(void) const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Form const &src);