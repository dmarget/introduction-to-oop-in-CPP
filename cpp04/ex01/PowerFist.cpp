//
// Created by Duncan Marget on 6/7/21.
//

#include "PowerFist.hpp"

PowerFist::PowerFist()
: AWeapon("PowerFist", 8, 50)
{}

PowerFist::PowerFist(PowerFist &copy): AWeapon(copy)
{}

PowerFist & PowerFist::operator=(PowerFist &copy)
{
	AWeapon::operator=(copy);
	return *this;
}

void PowerFist::attack() const
{
	std:: cout << "* pschhh... SBAM! * "<< std::endl;
}

PowerFist::~PowerFist()
{
}