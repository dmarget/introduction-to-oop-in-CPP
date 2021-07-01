//
// Created by Duncan Marget on 6/10/21.
//

#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(std::string const &target)
:Form("RobotomyRequestForm", 72, 45), _target(target)
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
: Form(copy),_target(copy._target)
{}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
	(void)copy;
	return *this;
}
void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << "Brrrrrrrrr... Beep-Boob"  << std::endl;
	std::string str[2];
	str[0] = _target + " robotization was successful." + "\n 11010000101011110010000011010001100000111101000010110001110100011000110011010001100011100010000011010000101100101101000110000001110100001011010111010001100001010010000011010001100001111101000010110"
					 "101110100001011101111010000101111101101000010110010110100001011010111010000101110101101000010111110110100001011001000100001";
	str[1] = _target + " robotization was failure.";
	std::cout << str[std::rand() % 2] << std::endl;
}

std::string RobotomyRequestForm::getTarget() const
{
	return _target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}