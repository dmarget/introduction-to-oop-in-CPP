//
// Created by Duncan Marget on 6/8/21.
//

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{}

Cure::Cure(Cure const &copy): AMateria("cure")
{
	_xp = copy._xp;
	_type = copy._type;
}

Cure::~Cure() {}

Cure &Cure::operator = (Cure const &copy)
{
	_xp = copy._xp;
	return *this;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}