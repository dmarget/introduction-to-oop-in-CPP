//
// Created by Duncan Marget on 6/10/21.
//

#ifndef EX01_SHRUBBERYCREATIONFORM_HPP
#define EX01_SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include <fstream>
class ShrubberyCreationForm : public Form
{
private:
	ShrubberyCreationForm();
	std::string const _target;
public:
	ShrubberyCreationForm(const std::string &target);
	ShrubberyCreationForm(ShrubberyCreationForm &copy);
	std::string getTarget() const;
	ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
	~ShrubberyCreationForm();
	void execute(const Bureaucrat &executor) const;
};


#endif //EX01_SHRUBBERYCREATIONFORM_HPP
