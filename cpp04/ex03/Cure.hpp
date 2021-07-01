//
// Created by Duncan Marget on 6/8/21.
//

#ifndef EX03_CURE_HPP
#define EX03_CURE_HPP
#include "AMateria.hpp"

class  Cure : public AMateria
{
public:
	Cure();
	virtual ~Cure();
	Cure(const Cure &other);
	Cure &operator=(const Cure &other);
	AMateria *clone() const;
	void use(ICharacter &target);
};

#endif //EX03_CURE_HPP
