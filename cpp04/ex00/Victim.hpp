//
// Created by Duncan Marget on 6/6/21.
//

#ifndef EX00_VICTIM_HPP
#define EX00_VICTIM_HPP
#include "iostream"


class Victim
{
public:
	Victim(std::string inName);
	Victim(const Victim &copy);
	virtual ~Victim();
	std::string getName() const;
	Victim & operator = (const Victim & copy);
	virtual void getPolymorph()const;
protected:
	Victim();
	std::string name;
};
std::ostream & operator<< (std::ostream & out, const Victim & copy);
#endif //EX00_VICTIM_HPP
