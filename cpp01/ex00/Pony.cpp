//
// Created by Duncan Marget on 5/26/21.
//

#include "Pony.hpp"

Pony::Pony(std::string inName, int inFlag) : name(inName), flag(inFlag)
{
	std::cout << (flag ? "heap" : "stack") << ": ";
	std::cout << "Hello! Say " << name << std::endl;
}

Pony::~Pony()
{
	std::cout << (flag ? "heap" : "stack") << ": ";
	std::cout << "Bye? Say " << name << std::endl;
}
