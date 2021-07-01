//
// Created by Duncan Marget on 6/8/21.
//

#ifndef EX03_IMATERIASOURCE_HPP
#define EX03_IMATERIASOURCE_HPP
#include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif //EX03_IMATERIASOURCE_HPP
