//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX01_POWERFIST_HPP
#define EX01_POWERFIST_HPP
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:
	PowerFist();
	PowerFist(PowerFist &copy);
	PowerFist & operator=(PowerFist &copy);
	void attack() const;
	virtual ~PowerFist();
};


#endif //EX01_POWERFIST_HPP
