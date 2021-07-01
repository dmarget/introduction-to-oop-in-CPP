//
// Created by Duncan Marget on 6/1/21.
//

#ifndef EX02_CLAPTRAP_HPP
#define EX02_CLAPTRAP_HPP
#include "iostream"

class ClapTrap
{
private:
	void initVal();
protected:
	ClapTrap();
	std::string name;
	int hitPoints;
	std::string type;
	int maxHitPoints;
	int energyPoints;
	int maxEnergyPoints;
	int level;
	int meleeAttackDamage;
	int rangedAttackDamage;
	int armorDamageReduction;
public:
	ClapTrap(std::string inName);
	~ClapTrap();
	ClapTrap & operator=(ClapTrap const & a);
	ClapTrap(const ClapTrap &copy);
	std::string getName() const;
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};


#endif //EX02_CLAPTRAP_HPP
