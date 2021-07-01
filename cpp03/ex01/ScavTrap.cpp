//
// Created by Duncan Marget on 6/1/21.
//

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){}

std::string ScavTrap::getName() const
{
	return name;
}

ScavTrap::ScavTrap(std::string inName)
		: name(inName), hitPoints(100),
		  maxHitPoints(100), maxEnergyPoints(100),
		  energyPoints(100), level(1), meleeAttackDamage(30),
		  rangedAttackDamage(20), armorDamageReduction(5)
{
	std::cout << name << " " << "Born to destroy" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "I was destroy, how ironic" << std::endl;
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
	std::cout << name << " Firestarter!" << this << std::endl;
}

void ScavTrap::rangedAttack(std::string const &target) {

	std::cout <<name << " attack "<< target;
	std::cout << " at range, causing "<< rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target) {

	std::cout << name << " attack "<< target;
	std::cout << " at melee, causing " << meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void 	ScavTrap::takeDamage(unsigned int amount) {
	int val;

	if ((val = ((int) amount - armorDamageReduction)) > 0)
		(int) amount - armorDamageReduction;
	if (amount > 0 && hitPoints)
		if (val < hitPoints)
		{
			std::cout << name << " takes damage " << val << " HP!" << std::endl;
			hitPoints -= val;
		}
		else
		{
			std::cout << name << " destroy!" << std::endl;
			hitPoints = 0;
		}
	else if (amount > 0)
		std::cout << " Eh, this is a corpse " << name << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
	std::string attacks[] = {" by tickling", " by gloom", " by pizza with pineapples",
							 " by russian series", " by pine chish"};
	int attackId = rand() % 5;
	std::cout << name << " challenge " << target << attacks[attackId] << std::endl;
}

void 	ScavTrap::beRepaired(unsigned int amount) {
	int val;

	val = hitPoints + (int) amount;
	if (maxHitPoints == hitPoints && hitPoints != 0)
		std::cout << name << " to not need to repair!" << std::endl;
	else if (val < maxHitPoints && hitPoints != 0)
	{
		std::cout << name << " got " << amount << " HP!" << std::endl;
		hitPoints = val;
	}
	else if (hitPoints != 0)
	{
		std::cout << name << " repaired!" << std::endl;
		hitPoints = maxHitPoints;
	}
}
