//
// Created by Duncan Marget on 6/10/21.
//

#include "Intern.hpp"

Form*	makeRobotomy(const std::string &title) {
	return	(new RobotomyRequestForm(title));
}

Form*	makePresidentialPardon(const std::string &title) {
	return	(new PresidentialPardonForm(title));
}

Form*	makeShrubberyCreation(const std::string &title) {
	return	(new ShrubberyCreationForm(title));
}

Form* Intern::makeForm(const std::string &form, const std::string &title) {
	try {
		std::cout << "Create form " << form << " " << title << std::endl;
		for (int i = 0; i < 3; i++)
			if (!form.compare(t_form[i].str)) {
				std::cout << "Created form " << form << " "<< title << std::endl;
				return t_form[i].createForm(title);
			}
		throw FormException();
	}
	catch (FormException &e) {
		std::cout << e.what() << std::endl;
	}
	return NULL;
}

const char *Intern::FormException::what() const throw() {
	return "Unknown shape !";
}

Intern::Intern()
{
	t_form[0].str = "robotomy request";
	t_form[1].str = "presidential pardon request";
	t_form[2].str = "shruberry creation request";
	t_form[0].createForm = &makeRobotomy;
	t_form[1].createForm = &makePresidentialPardon;
	t_form[2].createForm = &makeShrubberyCreation;
}

Intern::FormException::FormException() {}

Intern::FormException::~FormException() throw() {}

Intern & Intern::operator=(const Intern &copy)
{
	(void)copy;
	return *this;
}

Intern::~Intern()
{}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}