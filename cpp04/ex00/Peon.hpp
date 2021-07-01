//
// Created by Duncan Marget on 6/6/21.
//

#ifndef EX00_PEON_HPP
#define EX00_PEON_HPP
#include "Victim.hpp"

class Peon : public Victim
{
private:
	Peon();
public:
	Peon(std::string name);
	Peon(const Peon &copy);
	virtual ~Peon();
	Peon &operator = (const Peon &copy);
	void getPolymorph()const;
};

#endif //EX00_PEON_HPP
