//
// Created by Duncan Marget on 6/6/21.
//

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(){}

std::string Sorcerer::getName() const
{
	return name;
}

std::string Sorcerer::getTitle() const
{
	return title;
}

Sorcerer::Sorcerer(std::string inName, std::string inTitle)
: name(inName), title(inTitle)
{
	std::cout << name << " " << title << "is born!" << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << name << " " << title << "is dead. Consequences will never be the same!";
}

void Sorcerer::polymorph(Victim &target) const
{
	target.getPolymorph();
}

Sorcerer & Sorcerer::operator=(const Sorcerer &copy)
{
	name = copy.name;
	title = copy.title;
	return *this;
}

Sorcerer::Sorcerer(const Sorcerer &copy)
{
	name = copy.name;
	title = copy.title;
}

std::ostream &operator << (std::ostream &out, const Sorcerer &sorcerer) {

	out << "I'm " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;
	return out;
}