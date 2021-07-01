//
// Created by Duncan Marget on 6/8/21.
//

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const &copy): AMateria("ice")
{
	_xp = copy._xp;
	_type = copy._type;
}

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}


AMateria *Ice::clone() const
{
	return new Ice(*this);
}

Ice & Ice::operator=(Ice const &copy)
{
	_xp = copy._xp;
	return *this;
}

Ice::~Ice()
{}