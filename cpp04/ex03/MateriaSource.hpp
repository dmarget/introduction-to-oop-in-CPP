//
// Created by Duncan Marget on 6/8/21.
//

#ifndef EX03_MATERIASOURCE_HPP
#define EX03_MATERIASOURCE_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	static const int _equip = 4;
	AMateria *_source[4];
public:
	MateriaSource();
	virtual ~MateriaSource();
	MateriaSource(const MateriaSource &other);
	MateriaSource &operator=(const MateriaSource &other);
	void learnMateria(AMateria *materia) ;
	AMateria *createMateria(const std::string &type);
};


#endif //EX03_MATERIASOURCE_HPP
