//
// Created by Duncan Marget on 5/27/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string inName) : name(inName){}

void HumanB::attack()
{
	std::cout << name << "attacks with his " << weapon->getType() <<  std::endl;
}

void HumanB::setWeapon(Weapon &inWeapon)
{
	weapon = &inWeapon;
}