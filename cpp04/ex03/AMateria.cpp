//
// Created by Duncan Marget on 6/8/21.
//

#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(const std::string &type):  _type(type), _xp(0)
{}

AMateria::~AMateria() {}

const std::string & AMateria::getType() const
{
	return _type;
}

unsigned int AMateria::getXP() const
{
	return _xp;
}

void AMateria::use(ICharacter &target)
{
	_xp += 10;
}

AMateria & AMateria::operator=(AMateria &copy)
{
	_xp = copy._xp;
	return *this;
}