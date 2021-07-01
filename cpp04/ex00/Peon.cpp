//
// Created by Duncan Marget on 6/6/21.
//

#include "Peon.hpp"

Peon::Peon(){}

Peon::Peon(std::string inName) : Victim(inName)
{
	std::cout << "Zog zog." << std::endl;
}

Peon::~Peon()
{
	std::cout << "Bleuark..." << std::endl;
}

Peon & Peon::operator=(const Peon &copy)
{
	name = copy.name;
	return *this;
}

Peon::Peon(const Peon &copy)
{
	name = copy.name;
}

void Peon::getPolymorph() const
{
	std::cout << name << " has been turned into a pink pony!" << std::endl;
}