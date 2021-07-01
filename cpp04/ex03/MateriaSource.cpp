//
// Created by Duncan Marget on 6/8/21.
//

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_source[i] = nullptr;
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
	*this = copy;
}

MateriaSource & MateriaSource::operator=(MateriaSource const &type)
{
	for (int i = 0; i < _equip; i++)
	{
		if (_source[i] != nullptr)
			delete _source[i];
		_source[i] = type._source[i];
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *aMateria)
{
	if (aMateria == nullptr)
		return ;
	int i;
	for (i = 0; i < _equip && _source[i] != nullptr; i++);
	if (i < _equip && _source[i] == nullptr)
		_source[i] = aMateria;
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_source[i]->getType() == type)
			return _source[i]->clone();
	}
	return nullptr;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _equip; i++)
		delete _source[i];
}