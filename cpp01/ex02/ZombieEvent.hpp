//
// Created by Duncan Marget on 5/26/21.
//

#ifndef EX02_ZOMBIEEVENT_HPP
#define EX02_ZOMBIEEVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
	std::string type;
public:
	void setZombieType(std::string type);
	Zombie* newZombie(std::string name);
	void randomChump();
};


#endif //EX02_ZOMBIEEVENT_HPP
