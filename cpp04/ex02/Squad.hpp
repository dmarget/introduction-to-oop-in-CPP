//
// Created by Duncan Marget on 6/7/21.
//

#ifndef EX02_SQUAD_HPP
#define EX02_SQUAD_HPP
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include <iostream>
class Squad : public ISquad
{
private:
	ISpaceMarine **marines;
public:
	virtual ~Squad();
	Squad();
	Squad(Squad const &copy);
	Squad & operator=(Squad const &copy);
	int getCount() const;
	ISpaceMarine *getUnit(int i) const;
	int push(ISpaceMarine *unit);
};


#endif //EX02_SQUAD_HPP
