#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() :
Form("ShrubberyCreationForm", 145, 137)
{
	m_target = "Shrubbery";
}

ShrubberyCreationForm::ShrubberyCreationForm(const string &target) :
Form("ShrubberyCreationForm", 145, 137)
{
	m_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(
		const ShrubberyCreationForm &copy)
{
	if (this == &copy)
		return *this;
	m_target = copy.getTarget();
	return *this;
}

std::string		ShrubberyCreationForm::getTarget() const { return m_target; }

void 			ShrubberyCreationForm::action() const
{
	string	fileName = m_target + "_shrubbery";
	std::ofstream 	outFile;
	outFile.open(fileName);
	if (!outFile.is_open())
		throw ShrubberyCreationFormException();

	outFile << "    /\\      " << endl;
	outFile << "   /  \\     " << endl;
	outFile << "  /    \\    " << endl;
	outFile << "    ||       " << endl;
	outFile << " --------    " << endl;
	outFile.close();
}

const char *ShrubberyCreationForm::ShrubberyCreationFormException::what() const throw()
{
	return ("Can't open this file");
}