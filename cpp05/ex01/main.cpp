#include <iostream>
#include "Bureaucrat.hpp"

void test_form()
{
	Bureaucrat buro("Buro1", 100);
	try {
		Form form("Form one", 99, 100);
		buro.signForm(form);
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
//	try {
//		Form form("Form two", 100, 99);
//		buro.signForm(form);
//		buro.signForm(form);
//	}catch (std::exception &exception){
//		std::cerr << exception.what() << std::endl;
//	}
//	try{
//		Form form("Form three", 101, 100);
//		buro.signForm(form);
//	} catch (std::exception &exception){
//		std::cerr << exception.what() << std::endl;
//	}
}

int main() {
	test_form();
}