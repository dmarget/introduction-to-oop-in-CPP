//
// Created by Duncan Marget on 6/10/21.
//

#ifndef EX02_PRESIDENTIALPARDONFORM_HPP
#define EX02_PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	PresidentialPardonForm();
	std::string const _target;
public:
	PresidentialPardonForm(const std::string &target);
	PresidentialPardonForm(PresidentialPardonForm &copy);
	std::string getTarget() const;
	PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
	~PresidentialPardonForm();

	void execute(const Bureaucrat &executor) const;
};


#endif //EX02_PRESIDENTIALPARDONFORM_HPP
