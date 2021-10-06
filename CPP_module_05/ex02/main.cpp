#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	ShrubberyCreationForm form1("f1");
	ShrubberyCreationForm form2("f2");
	Bureaucrat bureaucrat1("b1", 149);
	Bureaucrat bureaucrat2("b2", 1);
	bureaucrat1.executeForm(form1);
	cout << form2 << endl;
	bureaucrat2.executeForm(form2);
	return 0;
}
