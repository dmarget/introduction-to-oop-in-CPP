//
// Created by Duncan Marget on 5/26/21.
//
#include "iostream"
#include "Zombie.hpp"

Zombie::Zombie(std::string & inName, std::string & inType)
	: name(inName), type(inType)
{
	std::cout << "<" << name << " (" << type << ')' <<  ">" << "I'm born" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "<" << name << " (" << type << ')' <<  ">" << "I'm dead" << std::endl;
}

void Zombie::announce()
{
	std::cout << "<" << name << " (" << type << ')' <<  ">" << " Braiiiiiiinnnssss..." << std::endl;
}