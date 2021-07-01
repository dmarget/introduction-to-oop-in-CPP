//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX01_ENEMY_HPP
#define EX01_ENEMY_HPP
#include "iostream"

class Enemy
{
private:
	Enemy();
	int _hp;
	std::string _type;
public:
	Enemy(int hp, std::string const & type);
	virtual ~Enemy();
	Enemy(Enemy const &copy);
	Enemy &operator = (Enemy const &copy);
	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int damage);
};


#endif //EX01_ENEMY_HPP
