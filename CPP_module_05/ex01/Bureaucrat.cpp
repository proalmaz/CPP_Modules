#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("NoNameBureaucrat"), m_grade(150) {}

Bureaucrat::Bureaucrat(const string &name, const int grade) : m_name(name)
{
	if (grade < 1)
		throw GrageTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	m_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	*this = copy;
}

Bureaucrat::~Bureaucrat()
{
	cout << "Destructor " << m_name << " called" << endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
	if (this == &copy)
		return *this;
	m_grade = copy.getGrade();
	return *this;
}

string	Bureaucrat::getName() const { return m_name; }

int 	Bureaucrat::getGrade() const { return m_grade; }

void 	Bureaucrat::incrementGrade()
{
	if (m_grade - 1 < 1)
		throw GrageTooHighException();
	m_grade--;
}

void 	Bureaucrat::decrementGrade()
{
	if (m_grade + 1 > 150)
		throw GradeTooLowException();
	m_grade++;
}

const char *Bureaucrat::GrageTooHighException::what() const throw()
{
	return ("Grade to high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade to low");
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &src)
{
	out << "Name of Bureaucrat is " << src.getName() << endl;
	out << "Grade is " << src.getGrade() << endl;
	return out;
}