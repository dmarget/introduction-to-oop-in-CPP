#include <time.h>
#include <string>
#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent Zombie;

	srand(time(NULL));
	for (int i = 0; i != 3; i++)
		Zombie.randomChump();
}
