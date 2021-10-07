#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	cout << "\n--------Shrubbery TEST--------\n\n";
	ShrubberyCreationForm form1("f1");
	ShrubberyCreationForm form2("f2");
	Bureaucrat bureaucrat1("b1", 149);
	Bureaucrat bureaucrat2("b2", 1);
	bureaucrat1.signForm(form1);
	bureaucrat1.executeForm(form1);
	cout << form1 << endl;
	bureaucrat2.signForm(form2);
	bureaucrat2.executeForm(form2);
	cout << form2 << endl;

	cout << "\n--------Robotomy TEST--------\n\n";
	RobotomyRequestForm r1("r1");
	RobotomyRequestForm r2("r2");
	Bureaucrat			a1("a1", 1);
	Bureaucrat			a2("a2", 150);
	a1.signForm(r1);
	a1.executeForm(r1);
	cout << r1 << endl;
	a2.signForm(r2);
	a2.executeForm(r2);
	cout << r2 << endl;

	cout << "\n--------Presidential TEST--------\n\n";
	PresidentialPardonForm p1("thief");
	PresidentialPardonForm p2("murderer");
	Bureaucrat	c2("c2", 24);
	Bureaucrat	c3("c3", 150);

	c2.signForm(p1);
	c2.executeForm(p1);
	std::cout << p1 << endl;
	c3.signForm(p2);
	c3.executeForm(p2);
	cout << p2 << endl;

	return 0;
}
