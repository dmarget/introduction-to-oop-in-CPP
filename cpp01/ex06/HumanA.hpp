//
// Created by Duncan Marget on 5/27/21.
//

#ifndef EX06_HUMANA_HPP
#define EX06_HUMANA_HPP
#include "Weapon.hpp"

class HumanA
{
	std::string name;
	Weapon *weapon;
public:
	HumanA(std::string inName, Weapon &weapon);
	void attack();
};


#endif //EX06_HUMANA_HPP
