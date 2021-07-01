//
// Created by Duncan Marget on 6/7/21.
//

#include "Character.hpp"

Character::Character()
: _name(std::string()), _ap(0), _curWeapon(nullptr)
{}

Character::Character(const std::string &name)
: _name(name), _ap(40), _curWeapon(nullptr)
{}

Character::Character(const Character &copy)
{
	_name = copy._name;
	_ap = copy._ap;
	_curWeapon = copy._curWeapon;
}

Character & Character::operator=(const Character &copy)
{
	_name = copy._name;
	_ap = copy._ap;
	_curWeapon = copy._curWeapon;
	return *this;
}

void Character::recoverAP()
{
	_ap += 10;
	if(_ap > 40)
		_ap = 40;
}

void Character::equip(AWeapon *weapon)
{
	_curWeapon = weapon;
}

std::string Character::getName() const
{
	return _name;
}

int Character::getAP() const
{
	return _ap;
}

AWeapon * Character::getWeapon() const
{
	return _curWeapon;
}

std::ostream &operator<<(std::ostream &out, const Character &obj)
{
	if (obj.getWeapon() != nullptr)
		out << obj.getName() << " has " << obj.getAP() << " AP and wields a " << obj.getWeapon()->getName() << std::endl;
	else
		out << obj.getName() << " has " << obj.getAP() << " AP and is unarmed" << std::endl;
	return (out);
}

void Character::attack(Enemy *target)
{
	if (getWeapon() == nullptr)
		return;
	if (_ap - getWeapon()->getAPCost() > 0)
	{
		std::cout << _name << " attacks " << target->getType() << " with a " << getWeapon()->getName() << std::endl;
		target->takeDamage(getWeapon()->getDamage());
		getWeapon()->attack();
		if (target->getHP() <= 0)
			delete target;
		_ap -= getWeapon()->getAPCost();
	}
}

Character::~Character()
{
	std::cout << _name << " is dead" << std::endl;
}