//
// Created by Duncan Marget on 5/27/21.
//

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string inName, Weapon &inWeapon)
: name(inName), weapon(&inWeapon)
{}

void HumanA::attack()
{
	std::cout << name << "attacks with his " << weapon->getType() <<  std::endl;
}

