//
// Created by Duncan Marget on 6/1/21.
//

#include "NinjaTrap.hpp"


NinjaTrap::NinjaTrap(){}

void NinjaTrap::initVal()
{
	hitPoints = 60;
	maxHitPoints = 60;
	energyPoints = 120;
	maxEnergyPoints = 120;
	level = 1;
	meleeAttackDamage = 60;
	rangedAttackDamage = 5;
	armorDamageReduction = 0;
	type = "NinjaTrap";
}

NinjaTrap::NinjaTrap(std::string inName) : ClapTrap()
{
	name = inName;
	initVal();
	std::cout << type << " " << name << " " << "Born to destroy" << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	std::cout << type << " " << name << " I was destroy, how ironic" << std::endl;
}

NinjaTrap & NinjaTrap::operator=(const NinjaTrap &copy)
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

NinjaTrap::NinjaTrap(const NinjaTrap &copy)
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

void NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	std::cout << "NinjaTrap tryed attack a " << target.getName() << ", but shuriken can't hit metal :(" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "NinjaTrap tryed attack a " << target.getName() << ", but shuriken can't hit metal :(" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	std::cout << "NinjaTrap tryed attack a " << target.getName() << ", but shuriken can't hit metal :(" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "NinjaTrap tryed attack a " << target.getName() << ", but shuriken can't hit metal :(" << std::endl;
}