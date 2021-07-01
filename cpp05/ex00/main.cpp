#include <iostream>
#include "Bureaucrat.hpp"


int main() {
	Bureaucrat buro("buro1", 50);
	std::cout << buro;
	buro.inc(20);
	std::cout << buro;
	buro.dec(1);
	std::cout << buro;

	try {
		Bureaucrat *buro2 = new Bureaucrat("buro2", 0);
		std::cout << *buro2;
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		Bureaucrat buro2("buro2", 150);
		std::cout << buro2;
		buro2.dec(1);
	} catch (std::exception const &e) {
		std::cerr << e.what() << std::endl;
	}
	return (0);
}