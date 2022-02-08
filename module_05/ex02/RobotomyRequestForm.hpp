#pragma once
#ifndef ROBOTMYREQUESTFORM_CLASS
#define ROBOTMYREQUESTFORM_CLASS

#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
public:
	RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & c);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm & operator=(RobotomyRequestForm const & c);
    void execute(Bureaucrat const & executor) const;
};

#endif
