//
// Created by Duncan Marget on 6/1/21.
//

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){}

std::string ClapTrap::getName() const
{
	return name;
}

ClapTrap::ClapTrap(std::string inName) : hitPoints(0), maxHitPoints(0), energyPoints(0), maxEnergyPoints(0), meleeAttackDamage(0), armorDamageReduction(0), level(0), rangedAttackDamage(0)
{
	name = inName;
	type = "ClupTrap";
	std::cout << type << " " << name << " " << "Born to destroy" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << type << " " << name << " I was destroy, how ironic" << std::endl;
}

ClapTrap & ClapTrap::operator=(const ClapTrap &copy)
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

ClapTrap::ClapTrap(const ClapTrap &copy)
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

void ClapTrap::rangedAttack(std::string const &target) {

	std::cout << type << " " << name << " attack "<< target;
	std::cout << " at range, causing "<< rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target) {

	std::cout << type << " " << name << " attack "<< target;
	std::cout << " at melee, causing " << meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void 	ClapTrap::takeDamage(unsigned int amount) {
	int val;

	if ((val = ((int) amount - armorDamageReduction)) > 0)
		amount  = (int) amount - armorDamageReduction;
	if (amount > 0 && hitPoints)
		if (val < hitPoints)
		{
			std::cout << type << " " << name << " takes damage " << val << " HP!" << std::endl;
			hitPoints -= val;
		}
		else
		{
			std::cout << type << " " << name << " destroy!" << std::endl;
			hitPoints = 0;
		}
	else if (amount > 0)
		std::cout << type << " " << "Eh, this is a corpse " << name << std::endl;
}

void 	ClapTrap::beRepaired(unsigned int amount) {
	int val;

	val = hitPoints + (int) amount;
	if (maxHitPoints == hitPoints && hitPoints != 0)
		std::cout << type << " " << name << " to not need to repair!" << std::endl;
	else if (val < maxHitPoints && hitPoints != 0)
	{
		std::cout << type << " " << name << " got " << amount << " HP!" << std::endl;
		hitPoints = val;
	}
	else if (hitPoints != 0)
	{
		std::cout << type << " " << name << " repaired!" << std::endl;
		hitPoints = maxHitPoints;
	}
}

