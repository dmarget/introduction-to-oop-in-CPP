//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX02_TACTICALMARINE_HPP
#define EX02_TACTICALMARINE_HPP
#include "ISpaceMarine.hpp"
#include "iostream"
class TacticalMarine :  public ISpaceMarine
{
public:
	TacticalMarine();
	virtual ~TacticalMarine();
	TacticalMarine(TacticalMarine const &copy);
	TacticalMarine &operator=(TacticalMarine const &copy);
	TacticalMarine *clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
};


#endif //EX02_TACTICALMARINE_HPP
