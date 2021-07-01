//
// Created by Duncan Marget on 6/7/21.
//

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(const RadScorpion &copy) : Enemy(copy)
{}

RadScorpion & RadScorpion::operator=(const RadScorpion &copy)
{
	Enemy::operator=(copy);
	return *this;
}

RadScorpion::~RadScorpion()
{
	std::cout << " * SPROTCH *" << std::endl;
}

