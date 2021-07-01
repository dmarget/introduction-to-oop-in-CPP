//
// Created by Duncan Marget on 5/26/21.
//

#include "iostream"
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "<" << name << " (" << type << ')' <<  ">" << "Nurgal will give us new life ..." << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ')' <<  ">" << " Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string inName)
{
	name = inName;
}

void Zombie::setType(std::string inType)
{
	type = inType;
}