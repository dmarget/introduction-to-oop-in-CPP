//
// Created by Duncan Marget on 5/26/21.
//

#ifndef EX03_ZOMBIE_HPP
#define EX03_ZOMBIE_HPP
#include "iostream"

class Zombie
{
private:
	std::string name;
	std::string type;
public:
	Zombie();
	~Zombie();
	void setName(std::string inName);
	void setType(std::string type);
	void announce();
};

#endif //EX03_ZOMBIE_HPP
