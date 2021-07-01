//
// Created by Duncan Marget on 6/8/21.
//

#ifndef EX03_CHARACTER_HPP
#define EX03_CHARACTER_HPP
#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string _name;
	const int _equip;
	AMateria *_inventory[4];
	Character();
public:
	Character(std::string const &  name);
	virtual ~Character();
	Character(Character &copy);
	Character & operator=(Character &copy);
	std::string const & getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};


#endif //EX03_CHARACTER_HPP
