//
// Created by Duncan Marget on 5/27/21.
//

#include "Brain.hpp"

std::string Brain::identify()
{
	std::stringstream	num;
	num << this;
	return (num.str());
}