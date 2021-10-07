#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy", 72, 45)
{
	m_target = "Robotomy";
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) :
Form("Robotomy",72, 45)
{
	m_target = target;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm	&RobotomyRequestForm::operator=(
		const RobotomyRequestForm &copy)
{
	if (this == &copy)
		return *this;
	m_target = copy.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const { return m_target; }

void RobotomyRequestForm::action() const
{
	srand(time(NULL));
	int result = rand() % 2;
	cout << "Making some drilling noises" << endl;
	if (result)
		cout << m_target << " was robotomized" << endl;
	else
		cout << m_target << " wasn't robotomized" << endl;
}