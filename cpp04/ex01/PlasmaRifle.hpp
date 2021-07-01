//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX01_PLASMARIFLE_HPP
#define EX01_PLASMARIFLE_HPP
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:
	PlasmaRifle();

	PlasmaRifle(PlasmaRifle &copy);
	PlasmaRifle & operator=(PlasmaRifle &copy);
	void attack() const;
	virtual ~PlasmaRifle();
};


#endif //EX01_PLASMARIFLE_HPP
