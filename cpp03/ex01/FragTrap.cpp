//
// Created by Duncan Marget on 5/31/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(){}

std::string FragTrap::getName() const
{
	return name;
}
FragTrap::FragTrap(std::string inName)
: name(inName), hitPoints(100),
	maxHitPoints(100), maxEnergyPoints(100),
	energyPoints(100), level(1), meleeAttackDamage(30),
	rangedAttackDamage(20), armorDamageReduction(5)
{
	std::cout << name << " " << "Born to destroy" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "I was destroy, how ironic" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &copy)
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

FragTrap::FragTrap(const FragTrap &copy)
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

void FragTrap::rangedAttack(std::string const &target) {

	std::cout <<name << " attack "<< target;
	std::cout << " at range, causing "<< rangedAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target) {

	std::cout << name << " attack "<< target;
	std::cout << " at melee, causing " << meleeAttackDamage;
	std::cout << " points of damage!" << std::endl;
}

void 	FragTrap::takeDamage(unsigned int amount) {
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

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[] = {" by choke ball grip", " by cheek tear", " by deafening tickler",
							 " by penetrating disclosure of truths", " by russian grammar"};
	int attackId = rand() % 5;
	if (energyPoints - 25 >= 0)
	{
		std::cout << name << " attacks " << target << attacks[attackId] << ", causing " << rangedAttackDamage << " points of damage!" << std::endl;
		energyPoints-= 25;
		if (energyPoints < 0)
			energyPoints = 0;
	}
	else
		std::cout << name << " is low energy, to make attack" << std::endl;
}

void 	FragTrap::beRepaired(unsigned int amount) {
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

