#pragma once

#include <iostream>
#include <exception>
#include <string>

using std::cin;
using std::string;
using std::cout;
using std::endl;

class Bureaucrat
{
private:
	const string	m_name;
	int 			m_grade;

public:
	Bureaucrat();
	Bureaucrat(string const &name, const int grade);
	Bureaucrat(Bureaucrat const &copy);
	~Bureaucrat();

	Bureaucrat	&operator=(Bureaucrat const &copy);

	string		getName() const;
	int 		getGrade() const;
	void 		incrementGrade();
	void 		decrementGrade();

	class GrageTooHighException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src);