//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX02_ASSAULTTERMINATOR_HPP
#define EX02_ASSAULTTERMINATOR_HPP
#include "ISpaceMarine.hpp"
#include "iostream"
class AssaultTerminator: public ISpaceMarine
{
public:
	AssaultTerminator();
	virtual ~AssaultTerminator();
	AssaultTerminator(AssaultTerminator const &copy);
	AssaultTerminator &operator=(AssaultTerminator const &copy);
	AssaultTerminator *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //EX02_ASSAULTTERMINATOR_HPP
