//
// Created by Duncan Marget on 5/26/21.
//

#include "ZombieEvent.hpp"

Zombie * ZombieEvent::newZombie(std::string name)
{
	Zombie *newNurglit;
	newNurglit = new Zombie(name, type);
	return newNurglit;
}
void ZombieEvent::randomChump()
{
	int max = 3;
	const std::string names[] = {"Marnelius", "Ortan", "Varron", "Aloysius"};
	const std::string types[] = {"Magistr", "Kapelan", "librarian", "guard"};
	Zombie *random;
	ZombieEvent ZombieEvent;

	ZombieEvent.setZombieType(types[rand() % (max + 1)]);
	random = ZombieEvent.newZombie(names[rand() % (max + 1)]);
	random->announce();
	delete random;
}

void ZombieEvent::setZombieType(std::string inType)
{
	this->type = inType;
}