//
// Created by Duncan Marget on 6/10/21.
//

#include "Form.hpp"

Form::Form() : _sign(false), _toSign(0), _toExec(0)
{}

Form::Form(const std::string &name,int toSign,int toExec)
: _name(name), _toSign(toSign), _toExec(toExec)
{
	if (_toSign < 1 || _toExec < 1)
		throw Form::GradeTooHighException();
	if (_toSign >= 150 || _toExec >= 150)
		throw Form::GradeTooLowException();
	_sign = false;
}

void Form::execute(Bureaucrat const &executor) const {

	if (executor.getGrade() > _toExec)
		throw Form::GradeTooLowException();
	if (!_sign)
		throw Form::UnsignedFormException();
}

void Form::beSigned(Bureaucrat const &bureaucrat)
{
	if (bureaucrat.getGrade() > _toSign)
		throw Form::GradeTooLowException();
	else if (_sign)
		throw Form::FormAlreadySignedException();
	_sign = true;
}
const char *Form::FormAlreadySignedException::what() const throw() {

	return "Form exception: Form is already signed";
}

const char *Form::UnsignedFormException::what() const throw() {

	return "Form exception: Form is unsigned and can't be execute";
}

const char *Form::GradeTooHighException::what() const throw() {

	return "Form exception: Grade too high";
}

const char *Form::GradeTooLowException::what() const throw() {

	return "Form exception: Grade too low";
}

Form & Form::operator=(const Form &copy)
{
	(void)copy;
	return *this;
}

const std::string & Form::getName() const
{
	return _name;
}

int Form::getSign() const
{
	return _toSign;
}

int Form::getExec() const
{
	return _toExec;
}

bool Form::getSigned() const
{
	return _sign;
}

Form::Form(const Form &copy)
: _name(copy._name), _toSign(copy._toSign),_toExec(copy._toExec)
{}

Form::~Form()
{}

std::ostream &operator << (std::ostream &out, Form const &form)
{
	out << std::endl;
	out << "Form name: " << form.getName() << std::endl;
	out << "Form is: " << ((form.getSigned()) ? "Signed" : "Unsigned") << std::endl;
	out << "Sign grade: "  << form.getSign() << std::endl ;
	out << "Execute grade: " << form.getExec() << std:: endl;
	return (out);
}