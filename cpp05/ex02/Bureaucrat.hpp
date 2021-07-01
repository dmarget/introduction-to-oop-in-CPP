//
// Created by Duncan Marget on 6/9/21.
//

#ifndef EX00_BUREAUCRAT_HPP
#define EX00_BUREAUCRAT_HPP
#include "iostream"
class Form;
#include "Form.hpp"
class Bureaucrat {

private:
	Bureaucrat();
	std::string			_name;
	int					_grade;

public:
	Bureaucrat(std::string const &name, int grade);
	Bureaucrat(Bureaucrat const &copy);
	virtual ~Bureaucrat();

	Bureaucrat &operator = (Bureaucrat const &copy);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};

	class GradeTooLowException: public std::exception{
		virtual const char* what() const throw();
	};
	void executeForm(Form const &form) const;
	int getGrade() const;
	std::string const &getName() const;
	void inc(int n);
	void dec(int n);

	void signForm(Form &form) const;

//	int getGrade() const;
};

std::ostream &operator << (std::ostream &out, Bureaucrat const &bureaucrat);

#endif //EX00_BUREAUCRAT_HPP
