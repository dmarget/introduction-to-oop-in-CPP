//
// Created by Duncan Marget on 5/31/21.
//

#ifndef EX00_FRAGTRAP_H
#define EX00_FRAGTRAP_H
#include "iostream"
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	FragTrap();
	void initVal();
public:
	FragTrap(std::string inName);
	FragTrap(const FragTrap &copy);
	FragTrap&	operator=(const FragTrap&);
	void vaulthunter_dot_exe(std::string const & target);
	~FragTrap();
};


#endif //EX00_FRAGTRAP_H
