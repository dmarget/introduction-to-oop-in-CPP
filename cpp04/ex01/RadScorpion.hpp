//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX01_RADSCORPION_HPP
#define EX01_RADSCORPION_HPP
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:
	RadScorpion();
	RadScorpion(RadScorpion const &copy);
	RadScorpion & operator = (RadScorpion const &copy);

	~RadScorpion();

//	void takeDamage(int damage);
};


#endif //EX01_RADSCORPION_HPP
