//
// Created by Duncan Marget on 6/1/21.
//

#ifndef EX02_NINJATRAP_HPP
#define EX02_NINJATRAP_HPP
#include "iostream"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
class NinjaTrap : public ClapTrap
{
private:
	NinjaTrap();
	void initVal();
public:
	NinjaTrap(std::string inName);
	NinjaTrap(const NinjaTrap &copy);
	NinjaTrap&	operator=(const NinjaTrap&);
	void ninjaShoebox(ClapTrap &clapTrap);
	void ninjaShoebox(ScavTrap &scavTrap);
	void ninjaShoebox(FragTrap &fragTrap);
	void ninjaShoebox(NinjaTrap &ninjaTrap);
	~NinjaTrap();
};


#endif //EX02_NINJATRAP_HPP
