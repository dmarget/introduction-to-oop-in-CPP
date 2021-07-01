//
// Created by Duncan Marget on 5/27/21.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string inType) : type(inType){}

std::string & Weapon::getType()
{
	return type;
}

void Weapon::setType(std::string inType)
{
	type = inType;
}

