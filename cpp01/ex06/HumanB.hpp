//
// Created by Duncan Marget on 5/27/21.
//

#ifndef EX06_HUMANB_HPP
#define EX06_HUMANB_HPP
#include "Weapon.hpp"

class HumanB
{
	std::string name;
	Weapon *weapon;
public:
	HumanB(std::string name);
	void attack();
	void setWeapon(Weapon &inWeapon);
};


#endif //EX06_HUMANB_HPP
