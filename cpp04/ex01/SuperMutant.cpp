//
// Created by Duncan Marget on 6/7/21.
//

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(const SuperMutant &copy) : Enemy(copy)
{}

SuperMutant & SuperMutant::operator=(const SuperMutant &copy)
{
	Enemy::operator=(copy);
	return *this;
}

void SuperMutant::takeDamage(int damage)
{
	damage += armor;
	if (damage >= 0)
		Enemy::takeDamage(damage);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh..." << std::endl;
}