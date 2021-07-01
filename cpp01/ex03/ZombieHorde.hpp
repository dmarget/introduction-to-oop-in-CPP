//
// Created by Duncan Marget on 5/26/21.
//

#ifndef EX03_ZOMBIEHORDE_HPP
#define EX03_ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
	int     n;
	int 	max;
	Zombie  *zombies;
public:
	ZombieHorde(int n);
	~ZombieHorde();
	void announce();
};


#endif //EX03_ZOMBIEHORDE_HPP
