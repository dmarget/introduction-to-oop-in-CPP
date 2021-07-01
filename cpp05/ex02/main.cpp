#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void presidential_test() {
	PresidentialPardonForm *presidentialPardonForm;
	Bureaucrat *bureaucrat;
	try {
		presidentialPardonForm = new PresidentialPardonForm("Murik");
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
//	std::cout << *presidentialPardonForm << std::endl;
	try {
		bureaucrat = new Bureaucrat("Buro", 1);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		bureaucrat->signForm(*presidentialPardonForm);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	try {
		bureaucrat->executeForm(*presidentialPardonForm);
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}
	std::cout << *presidentialPardonForm << std::endl;
}

void robo_test() {
	try {
		RobotomyRequestForm robotomyRequestForm("Bender");
		try {
			std::cout << robotomyRequestForm << std::endl;
			Bureaucrat bureaucrat("Buro", 5);
			try {
				bureaucrat.signForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.signForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.executeForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
			try {
				bureaucrat.executeForm(robotomyRequestForm);
			}catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
		}catch (std::exception &exception){
			std::cerr << exception.what() << std::endl;
		}
	}
	catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
}

void shrub_test() {
	try {
		ShrubberyCreationForm shrubberyCreationForm("George");
		std::cout << shrubberyCreationForm << std::endl;
		try {
			Bureaucrat bureaucrat("Buro", 10);

			try {
				bureaucrat.signForm(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
//	-----------exception
			try {
				bureaucrat.signForm(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
//	------------------------------
			try {
				bureaucrat.executeForm(shrubberyCreationForm);
			} catch (std::exception &exception) {
				std::cerr << exception.what() << std::endl;
			}
		} catch (std::exception &exception) {
			std::cerr << exception.what() << std::endl;
		}
	} catch (std::exception &exception) {
		std::cerr << exception.what() << std::endl;
	}

}


int main()
{
	std::srand(std::time(NULL));
//	shrub_test();
//	robo_test();
	presidential_test();
}
