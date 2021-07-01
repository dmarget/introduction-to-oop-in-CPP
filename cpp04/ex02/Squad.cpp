//
// Created by Duncan Marget on 6/7/21.
//

#include "Squad.hpp"

Squad::Squad()
{
	marines = new ISpaceMarine*[1];
	marines[0] = nullptr;
}

int Squad::getCount() const
{
	int i = 0;
	while (marines[i])
		i++;
	return i;
}

Squad & Squad::operator=(Squad const &copy)
{
	if (this == &copy)
		return *this;
	delete[] marines;
	if (copy.marines)
	{
		marines = new ISpaceMarine *[copy.getCount() + 1];
		int i = 0;
		while (copy.marines[i])
			if (copy.marines[i++] != nullptr)
				marines[i] = copy.marines[i]->clone();
	}
	else
		marines = nullptr;
	return *this;
}

int Squad::push(ISpaceMarine *iSpaceMarine)
{
	int flag = 1;
	if (iSpaceMarine == nullptr)
		flag = 0;
	int i = 0;
	while (marines[i])
	{
		if (marines[i] == iSpaceMarine)
			flag = 0;
		i++;
	}
	ISpaceMarine **oldMarine = marines;
	int oldCount = getCount();
	marines = new ISpaceMarine*[i + 2];
	for (int j = 0; j < oldCount; j++)
		marines[j] = oldMarine[j];
	if (flag)
		marines[i] = iSpaceMarine;
	marines[i + 1] = nullptr;
	return i;
}

ISpaceMarine *Squad::getUnit(int i) const
{
	int j = 0;
	while (marines[j])
	{
		if (j == i)
			return (marines[j]);
		j++;
	}
	return (nullptr);
}

Squad::~Squad()
{
	delete[] marines;
}