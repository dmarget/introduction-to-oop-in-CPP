//
// Created by Duncan Marget on 5/26/21.
//

#ifndef EX00_PONY_HPP
#define EX00_PONY_HPP

#include <iostream>
#include <string>

class Pony
{
private:
	std::string name;
	int flag;
public:
	Pony(std::string inName, int inFlag);
	~Pony();
};


#endif //EX00_PONY_HPP
