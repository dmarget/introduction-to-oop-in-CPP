//
// Created by Duncan Marget on 5/27/21.
//

#ifndef EX05_HUMAN_HPP
#define EX05_HUMAN_HPP
#include "Brain.hpp"

class Human
{
	Brain brain;
public:
	Human();
	std::string identify();
	Brain &getBrain();
};


#endif //EX05_HUMAN_HPP
