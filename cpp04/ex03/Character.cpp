//
// Created by Duncan Marget on 6/8/21.
//

#include "Character.hpp"

Character::Character() : _equip(4)
{

}

Character::Character(const std::string &name) : _equip(4), _name(name)
{
	for (int i = 0; i < _equip; i++)
		_inventory[i] = nullptr;
}

void Character::unequip(int idx)
{
	if (idx < _equip && idx > 0)
		_inventory[idx] = nullptr;
}

void Character::use(int idx, ICharacter &target)
{
	if (_equip <= idx || idx < 0 || !_inventory[idx])
		return;
	_inventory[idx]->use(target);
}

void Character::equip(AMateria *materia)
{
	int i;
	if (materia == nullptr)
		return ;
	for (i = 0; i < _equip && _inventory[i] != nullptr; i++);
	if (i < _equip && _inventory[i] == nullptr)
		_inventory[i] = materia;
}

Character::Character(Character &copy)
: _equip(0), _name(copy._name)
{
	for (int i = 0; i < _equip; i++)
		equip(copy._inventory[i]->clone());
}

Character & Character::operator=(Character &copy)
{
	_name = copy.getName();
	for (int i = 0; i < _equip; i++)
	{
		if (copy._inventory[i] != nullptr)
			delete copy._inventory[i];
		_inventory[i] = copy._inventory[i];
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < _equip; i++)
		delete _inventory[i];
}

const std::string & Character::getName() const
{
	return _name;
}