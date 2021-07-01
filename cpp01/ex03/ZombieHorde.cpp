//
// Created by Duncan Marget on 5/26/21.
//

#include "ZombieHorde.hpp"
#include "Zombie.hpp"

ZombieHorde::ZombieHorde(int num) : n(num), max(3)
{
	const std::string names[] = {"Marnelius", "Ortan", "Varron", "Aloysius"};
	const std::string types[] = {"Magistr", "Kapelan", "librarian", "guard"};

	zombies = new  Zombie[num];
	srand(time(NULL));
	std::cout << "Nurgle thirsts for flesh!" << std::endl;
	for (int i = 0; i < num; i++)
	{
		zombies[i].setName(names[rand() % (max + 1)]);
		zombies[i].setType(types[rand() % (max + 1)]);
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Brlbrlxzhs" << std::endl;
	delete [] zombies;
}

void ZombieHorde::announce()
{
	std::cout << "RRRaaaaaaa" << std::endl;
	for (int i = 0; i < n; i++)
		zombies[i].announce();
}
