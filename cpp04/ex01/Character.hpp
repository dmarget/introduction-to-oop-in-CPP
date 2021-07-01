//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX01_CHARACTER_HPP
#define EX01_CHARACTER_HPP
#include <iostream>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
private:
	std::string _name;
	AWeapon *_curWeapon;
	Character();
	int _ap;
public:
	Character(std::string const & name);
	AWeapon *getWeapon() const;
	~Character();
	void recoverAP();
	int getAP() const;
	Character(Character const &copy);
	Character &operator = (Character const &copy);
	void equip(AWeapon* weapon);
	void attack(Enemy* target);
	std::string getName() const;
};
std::ostream &operator<<(std::ostream &out, const Character &obj);


#endif //EX01_CHARACTER_HPP
