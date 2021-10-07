#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	string	m_target;

public:
	RobotomyRequestForm();
	RobotomyRequestForm(string target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	virtual ~RobotomyRequestForm();

	RobotomyRequestForm &operator=(RobotomyRequestForm const &copy);

	virtual void	action() const;
	std::string 	getTarget() const;
};
