//
// Created by Duncan Marget on 5/31/21.
//

#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H
#include "iostream"

class FragTrap
{
private:
	FragTrap();
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
	FragTrap(std::string inName);
	FragTrap(const FragTrap &copy);
	std::string getName() const;
	FragTrap&	operator=(const FragTrap&);
	void vaulthunter_dot_exe(std::string const & target);
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~FragTrap();
};


#endif //EX00_FRAGTRAP_H
