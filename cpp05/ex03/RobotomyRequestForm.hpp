//
// Created by Duncan Marget on 6/10/21.
//

#ifndef EX02_ROBOTOMYREQUESTFORM_HPP
#define EX02_ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	RobotomyRequestForm();
	std::string const _target;
public:
	RobotomyRequestForm(const std::string &target);
	RobotomyRequestForm(RobotomyRequestForm &copy);
	std::string getTarget() const;
	RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
	~RobotomyRequestForm();
	void execute(const Bureaucrat &executor) const;
};


#endif //EX02_ROBOTOMYREQUESTFORM_HPP
