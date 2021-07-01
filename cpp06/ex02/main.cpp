#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void)
{
	int i;

	i = rand() % 3;
	if (i == 0)
		return new A;
	else if (i == 1)
		return new B;
	else
		return new C;
}

void identify_from_pointer(Base *p) {

	if (dynamic_cast<A *>(p))
		std::cout << "class A" << std::endl;
	else if (dynamic_cast<B *>(p))
		std::cout << "class B" << std::endl;
	else if (dynamic_cast<C *>(p))
		std::cout << "class C" << std::endl;
	else
		std::cerr << "Cannot cast" << std::endl;
}

void identify_from_refernce(Base &p)
{
	if (dynamic_cast<A *>(&p))
		std::cout << "class A" << std::endl;
	else if (dynamic_cast<B *>(&p))
		std::cout << "class B" << std::endl;
	else if (dynamic_cast<C *>(&p))
		std::cout << "class C" << std::endl;
	else
		std::cerr << "Cannot cast" << std::endl;
}

int main()
{
	Base *check;

	std::srand(time(NULL));
	check = generate();
	std::cout << "Identify from ""POINTER     ";
	identify_from_pointer(check);
	std::cout << "Identify from ""REFERENCE   ";
	identify_from_refernce(*check);
}