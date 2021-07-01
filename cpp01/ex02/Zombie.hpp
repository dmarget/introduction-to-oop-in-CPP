//
// Created by Duncan Marget on 5/26/21.
//

#ifndef EX02_ZOMBIE_HPP
#define EX02_ZOMBIE_HPP
#include "iostream"

class Zombie
{
	std::string name;
	std::string type;
public:
	Zombie(std::string & inName, std::string & inType);
	~Zombie();
	void announce();
};


#endif //EX02_ZOMBIE_HPP
