//
// Created by Duncan Marget on 6/8/21.
//

#ifndef EX03_ICE_HPP
#define EX03_ICE_HPP
//#include "MateriaSource.hpp"
#include "AMateria.hpp"
class Ice : public AMateria
{
public:
	Ice();
	virtual ~Ice();
	Ice(const Ice &other);
	Ice &operator=(const Ice &other);
	AMateria *clone() const;
	void use(ICharacter &target);
};


#endif //EX03_ICE_HPP
