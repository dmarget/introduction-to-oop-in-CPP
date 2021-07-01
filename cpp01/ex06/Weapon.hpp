//
// Created by Duncan Marget on 5/27/21.
//

#ifndef EX06_WEAPON_HPP
#define EX06_WEAPON_HPP
#include "iostream"

class Weapon
{
	std::string type;
public:
	Weapon(std::string inType);
	std::string &getType();
	void	setType(std::string inType);
};


#endif //EX06_WEAPON_HPP
