//
// Created by Duncan Marget on 6/8/21.
//

#ifndef EX03_AMATERIA_HPP
#define EX03_AMATERIA_HPP
#include "iostream"

class ICharacter;
#include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();
protected:
	std::string _type;
	unsigned int _xp;
public:
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria & operator= (AMateria &amateria);
	std::string const & getType() const;
	unsigned int getXP() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter & target);
};


#endif //EX03_AMATERIA_HPP
