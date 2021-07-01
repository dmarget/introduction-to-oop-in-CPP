//
// Created by Duncan Marget on 5/31/21.
//

#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H
#include "iostream"
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	FragTrap();
	void initVal();
public:
	FragTrap(std::string inName);
	FragTrap(const FragTrap &copy);
//	std::string getName() const;
	FragTrap&	operator=(const FragTrap&);
	void vaulthunter_dot_exe(std::string const & target);
//	void rangedAttack(std::string const & target);
//	void meleeAttack(std::string const & target);
//	void takeDamage(unsigned int amount);
//	void beRepaired(unsigned int amount);
	~FragTrap();
};


#endif //EX00_FRAGTRAP_H
