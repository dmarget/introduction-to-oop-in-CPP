//
// Created by Duncan Marget on 6/6/21.
//

#include "Victim.hpp"

Victim::Victim(){}

Victim::Victim(std::string inName) : name(inName)
{
	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim(const Victim &copy)
{
	name = copy.name;
}

std::string Victim::getName() const
{
	return name;
}

void Victim::getPolymorph() const
{
	std::cout << name << " has been turned into a cute little sheep!" << std::endl;
}

Victim &Victim::operator = (const Victim &copy)
{
	name = copy.name;
	return *this;
}
Victim::~Victim()
{
	std::cout << "Victim " << name << " just died for no apparent reason!" << std::endl;
}
std::ostream & operator << (std::ostream & out, const Victim &obj) {

	out << "I'm " << obj.getName() << " and I like otters!" << std::endl;
	return out;
}