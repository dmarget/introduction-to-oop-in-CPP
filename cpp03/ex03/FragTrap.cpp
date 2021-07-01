//
// Created by Duncan Marget on 5/31/21.
//

#include "FragTrap.hpp"

FragTrap::FragTrap(){}

void FragTrap::initVal()
{
	hitPoints = 100;
	maxHitPoints = 100;
	energyPoints = 100;
	maxEnergyPoints = 100;
	level = 1;
	meleeAttackDamage = 30;
	rangedAttackDamage = 20;
	armorDamageReduction = 5;
	type = "FR4G-TP";
}

FragTrap::FragTrap(std::string inName) : ClapTrap()//: ClapTrap(inName, 100, 100, 100, 100, 1, 30, 20, 5)
{
	name = inName;
	initVal();
	std::cout << type << " " << name << " " << "Born to destroy" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << type << " " << name << " I was destroy, how ironic" << std::endl;
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
	std::cout << type << " " << name << " Firestarter!" << this << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	std::string attacks[] = {" by choke ball grip", " by cheek tear", " by deafening tickler",
							 " by penetrating disclosure of truths", " by russian grammar"};
	int attackId = rand() % 5;
	if (energyPoints - 25 >= 0)
	{
		std::cout << type << " " << name << " attacks " << target << attacks[attackId] << ", causing " << rangedAttackDamage << " points of damage!" << std::endl;
		energyPoints-= 25;
		if (energyPoints < 0)
			energyPoints = 0;
	}
	else
		std::cout << type << " " << name << " is low energy, to make attack" << std::endl;
}
