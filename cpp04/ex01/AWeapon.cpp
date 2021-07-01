//
// Created by Duncan Marget on 6/7/21.
//

#include "AWeapon.hpp"

AWeapon::AWeapon()
{}

AWeapon::AWeapon(const std::string &name, int apcost, int damage)
: _name(name), _apCost(apcost), _damage(damage)
{
}

std::string AWeapon::getName() const
{
	return _name;
}

int AWeapon::getAPCost() const
{
	return _apCost;
}

AWeapon & AWeapon::operator=(AWeapon &copy)
{
	_name = copy._name;
	_damage = copy._damage;
	_apCost = copy._apCost;
	return *this;
}

AWeapon::AWeapon(AWeapon &copy)
{
	_name = copy._name;
	_damage = copy._damage;
	_apCost = copy._apCost;
}

int AWeapon::getDamage() const
{
	return _damage;
}

AWeapon::~AWeapon()
{
	std::cout << _name <<  " weapon destroyed" << std::endl;
}