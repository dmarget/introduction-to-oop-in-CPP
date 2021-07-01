//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX01_SUPERMUTANT_HPP
#define EX01_SUPERMUTANT_HPP
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
	const static int armor = 3;
public:
	SuperMutant();
	SuperMutant(SuperMutant const &copy);
	SuperMutant & operator = (SuperMutant const &copy);
	void takeDamage(int damage);
	~SuperMutant();
};


#endif //EX01_SUPERMUTANT_HPP
