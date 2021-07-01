//
// Created by Duncan Marget on 6/9/21.
//

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{}

Bureaucrat::Bureaucrat(std::string const &name, int grade)
:_name(name), _grade(grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy)
:_name(copy._name), _grade(copy._grade)
{
	if (_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (_grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

void Bureaucrat::signForm(Form &form) const {

	if (form.getSigned()) {

		std::cout << *this << " can't sign" << form;
		std::cout << " cause the form already signed." << std::endl;
	}
	else if (form.getSign() < _grade)
		std::cout <<  *this << "Can't sign " << form << "Cause it's grade is low." << std::endl;
	else
		std::cout << *this << " signs" << form << std::endl;
	form.beSigned(*this);
}

void Bureaucrat::executeForm(Form &form) const
{

	if (!form.getSigned()) {

		std::cout <<  *this  << "Can't execute\n" << form;
		std::cout << "Cause the form is unsigned." << std::endl;
	}
	else if (form.getExec() < this->_grade) {

		std::cout << *this << "Can't execute " << form;
		std::cout << "Cause it's grade is too low." << std::endl;
	}
	else {
		std::cout <<  *this  << "Executes " << std:: endl << form << std::endl;
	}
	form.execute(*this);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const &copy)
{
	_name = copy._name;
	_grade = copy._grade;
	return *this;
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Bureaucrat exception: to low grade.";
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Bureaucrat exception: to high grade.";
}

int Bureaucrat::getGrade() const
{
	return _grade;
}

std::string const &Bureaucrat::getName() const
{
	return _name;
}

void Bureaucrat::inc(int n)
{
	_grade = _grade - n;
	_grade < 1 ? throw Bureaucrat::GradeTooHighException() : 0;
}

void Bureaucrat::dec(int n)
{
	_grade = _grade + n;
	_grade > 150 ? throw Bureaucrat::GradeTooLowException() : 0;
}

std::ostream &operator << (std::ostream &out, Bureaucrat const &bureaucrat)
{
	out << "I'm " << bureaucrat.getName();
	out << " I have a " << bureaucrat.getGrade() << " grade." << std::endl;
	return out;
}