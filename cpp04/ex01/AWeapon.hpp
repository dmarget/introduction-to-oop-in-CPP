//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX01_AWEAPON_HPP
#define EX01_AWEAPON_HPP
#include "iostream"

class AWeapon
{
private:
	AWeapon();
	std::string _name;
	int 		_apCost;
	int 		_damage;
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon &copy);
	AWeapon & operator=(AWeapon &copy);
	virtual ~AWeapon();
	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;
};


#endif //EX01_AWEAPON_HPP
