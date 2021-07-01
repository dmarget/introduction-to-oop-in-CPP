//
// Created by Duncan Marget on 6/7/21.
//

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle()
: AWeapon("Plasma Rifle", 5, 21)
{}

PlasmaRifle::PlasmaRifle(PlasmaRifle &copy): AWeapon(copy)
{}

PlasmaRifle & PlasmaRifle::operator=(PlasmaRifle &copy)
{
	AWeapon::operator=(copy);
	return *this;
}

void PlasmaRifle::attack() const
{
	std:: cout << "* piouuu piouuu piouuu *" << std::endl;
}

PlasmaRifle::~PlasmaRifle()
{}