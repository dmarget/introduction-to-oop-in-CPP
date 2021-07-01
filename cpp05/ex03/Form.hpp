//
// Created by Duncan Marget on 6/10/21.
//

#ifndef EX01_FORM_HPP
#define EX01_FORM_HPP
#include "iostream"
class Bureaucrat;
#include "Bureaucrat.hpp"

class Form
{
private:
//	Form();
	bool _sign;
	std::string _name;
	const int _toSign;
	const int _toExec;
protected:
	Form();
public:
	Form(const std::string &name,  int toSign, int toExec);
	virtual ~Form();
	Form(const Form &copy);
	Form &operator=(const Form &copy);
	const std::string &getName() const;
	class FormAlreadySignedException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};
	class UnsignedFormException: public std::exception {
		virtual const char * what() const throw();
	};
	bool getSigned() const;
	void beSigned(Bureaucrat const &bureaucrat);
	int getSign() const;
	int getExec() const;
	virtual void execute(Bureaucrat const &executor) const;
};
std::ostream &operator << (std::ostream &out, Form const &form);

#endif //EX01_FORM_HPP
