#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	cout << "\n--------Shrubbery TEST--------\n\n";
	Intern someRandomIntern;
	Form* rrf;
	Bureaucrat b1("b1", 1);
	try
	{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");

		cout << *rrf << endl;
		delete rrf;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}

	cout << "\n--------Presidential TEST--------\n\n";
	try
	{
		rrf = someRandomIntern.makeForm("presidntial pardon", "Bender");
		cout << *rrf << endl;
		delete rrf;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl << endl;
	}
	try
	{
		Form *rrf1;
		rrf1 = someRandomIntern.makeForm("presidential pardon", "Bender");
		cout << *rrf1 << endl;
		delete rrf1;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl << endl;
	}

	cout << "\n--------Robotomy TEST--------\n\n";
	try
	{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		b1.signForm(*rrf);
		b1.executeForm(*rrf);
		cout << *rrf << endl;
		delete rrf;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	return 0;
}
