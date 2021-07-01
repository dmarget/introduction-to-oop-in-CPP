//
// Created by Duncan Marget on 6/1/21.
//

#ifndef EX01_SCAVTRAP_HPP
#define EX01_SCAVTRAP_HPP
#include "iostream"

class ScavTrap
{
private:
	ScavTrap();
	std::string name;
	int hitPoints;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
public:
	ScavTrap(std::string inName);
	ScavTrap(const ScavTrap &copy);
	std::string getName() const;
	ScavTrap&	operator=(const ScavTrap&);
	void challengeNewcomer(std::string const & target);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ScavTrap();
};


#endif //EX01_SCAVTRAP_HPP
