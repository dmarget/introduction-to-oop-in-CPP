//
// Created by Duncan Marget on 6/2/21.
//

#ifndef EX03_SUPERTRAP_HPP
#define EX03_SUPERTRAP_HPP
#include "iostream"
#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap : public FragTrap, public NinjaTrap
{
private:
	SuperTrap();
public:
	SuperTrap(std::string inName);
	SuperTrap(const SuperTrap &copy);
	SuperTrap&	operator=(const SuperTrap&);
	~SuperTrap();
};


#endif //EX03_SUPERTRAP_HPP
