#include <iostream>
#include "Bureaucrat.hpp"
#include "Intern.hpp"

#include "Form.hpp"
#include "Intern.hpp"

int main()
{
	Intern someRandomIntern;
	Form* rrf;
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
}