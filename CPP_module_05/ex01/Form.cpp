#include "Form.hpp"

Form::Form() : m_name("noNameForm"), m_signStatus(false),
m_gradeForSign(0), m_gradeForUse(0) {}

Form::Form(std::string name, int gradeForSign, int gradeForUse) :
m_name(name), m_gradeForSign(gradeForSign), m_gradeForUse(gradeForUse)
{
	if (gradeForSign < 1 || gradeForUse < 1)
		throw GradeTooHighException();
	else if (gradeForUse > 150 || gradeForSign > 150)
		throw GradeTooLowException();
	m_signStatus = false;
}

Form::Form(const Form &copy) : m_name(copy.m_name), m_signStatus(copy.m_signStatus),
m_gradeForSign(copy.m_gradeForSign), m_gradeForUse(copy.m_gradeForUse) {}

Form::~Form() {}

Form	&Form::operator=(const Form &copy)
{
	if (this == &copy)
		return *this;
	m_signStatus = copy.m_signStatus;
	return *this;
}

std::string Form::getName() const { return m_name; }

int Form::getGradeForSign() const { return m_gradeForSign; }

int Form::getGradeForUse() const { return m_gradeForUse; }

bool Form::getSignStatus() const { return m_signStatus; }

void 		Form::beSigned(const Bureaucrat &src)
{
	if (src.getGrade() > m_gradeForUse)
		throw GradeTooLowException();
	if (m_signStatus)
		throw FormAlreadySigned();
	m_signStatus = true;
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return "Grade is too high";
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return "Grade is too low";
}

const char	*Form::FormAlreadySigned::what() const throw()
{
	return "Form is already signed";
}

std::ostream &operator<<(std::ostream &out, Form const &src)
{
	out << "Form is " << src.getName() << endl;
	out << "Sign status is " << (src.getSignStatus() ? "true" : "false")
	<< endl;
	out << "Grade for sign = " << src.getGradeForSign() << endl;
	out << "Grade for use = " << src.getGradeForUse() << endl;
	return out;
}
