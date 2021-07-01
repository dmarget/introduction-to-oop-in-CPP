//
// Created by Duncan Marget on 6/7/21.
//

#include "Enemy.hpp"

Enemy::Enemy()
{}

Enemy::Enemy(int hp, const std::string &type)
: _hp(hp), _type(type)
{}

int Enemy::getHP() const
{
	return _hp;
}

Enemy::Enemy(const Enemy &copy)
{
	_type = copy._type;
	_hp = copy._hp;
}

Enemy & Enemy::operator=(const Enemy &copy)
{
	_type = copy._type;
	_hp = copy._hp;
	return *this;
}

std::string Enemy::getType() const
{
	return _type;
}

void Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		_hp -= damage;
		if (_hp < 0)
			_hp = 0;
	}
}

Enemy::~Enemy()
{
}