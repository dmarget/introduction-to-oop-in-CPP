//
// Created by Duncan Marget on 6/2/21.
//

#include "SuperTrap.hpp"


SuperTrap::SuperTrap(std::string inName) : FragTrap(inName), NinjaTrap(inName)
{
	name = inName;
	type = "SuperTrap";
	std::cout << type << " " << name << " Born to destroy" << std::endl;
}

SuperTrap::~SuperTrap()
{
	std::cout << type << " " << name << " I was destroy, how ironic" << std::endl;
}

SuperTrap & SuperTrap::operator=(const SuperTrap &copy)
{
	name = copy.name;
	hitPoints = copy.hitPoints;
	maxHitPoints = copy.maxHitPoints;
	energyPoints = copy.energyPoints;
	maxEnergyPoints = copy.maxEnergyPoints;
	meleeAttackDamage = copy.meleeAttackDamage;
	rangedAttackDamage = copy.rangedAttackDamage;
	level = copy.level;
	armorDamageReduction = copy.armorDamageReduction;
	return *this;
}

SuperTrap::SuperTrap(const SuperTrap &copy) : ClapTrap(copy.name), FragTrap(copy.name), NinjaTrap(copy.name)
{
	name = copy.name;
	hitPoints = copy.hitPoints;
	maxHitPoints = copy.maxHitPoints;
	energyPoints = copy.energyPoints;
	maxEnergyPoints = copy.maxEnergyPoints;
	meleeAttackDamage = copy.meleeAttackDamage;
	rangedAttackDamage = copy.rangedAttackDamage;
	level = copy.level;
	armorDamageReduction = copy.armorDamageReduction;
	std::cout << type << " " << name << " Firestarter!" << this << std::endl;
}