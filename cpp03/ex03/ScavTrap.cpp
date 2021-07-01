//
// Created by Duncan Marget on 6/1/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

void ScavTrap::initVal()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	type = "ScavTrap";
}

ScavTrap::ScavTrap(std::string inName)
{
	name = inName;
	initVal();
	std::cout << type << " " << name << " " << "Born to destroy" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << type << " " << name << " I was destroy, how ironic" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &copy)
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

ScavTrap::ScavTrap(const ScavTrap &copy)
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

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string attacks[] = {" by tickling", " by gloom", " by pizza with pineapples",
							 " by russian series", " by pine chish"};
	int attackId = rand() % 5;
	std::cout << type << " " << name << " challenge " << target << attacks[attackId] << std::endl;
}
