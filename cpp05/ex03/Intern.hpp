//
// Created by Duncan Marget on 6/10/21.
//

#ifndef EX02_INTERN_HPP
#define EX02_INTERN_HPP
#include "iostream"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
class Intern
{
private:
	struct s_form {
		std::string	str;
		Form*	(*createForm)(const std::string &);
	} t_form[3];
public:
	Intern();
	class	FormException : public std::exception
	{
	public:
		FormException();

		virtual ~FormException() throw();

		virtual const char *what() const throw();
	};
	Form* makeForm(const std::string &, const std::string &);
	Intern(const Intern &copy);
	Intern &operator=(const Intern &copy);
	virtual ~Intern();
};


#endif //EX02_INTERN_HPP
