//
// Created by Duncan Marget on 5/27/21.
//

#include "Human.hpp"

Human::Human() : brain() {}

std::string Human::identify()
{
	return this->brain.identify();
}

Brain &Human::getBrain()
{
	return this->brain;
}
