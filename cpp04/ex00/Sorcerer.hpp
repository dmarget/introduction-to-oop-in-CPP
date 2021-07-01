//
// Created by Duncan Marget on 6/6/21.
//

#ifndef EX00_SORCERER_HPP
#define EX00_SORCERER_HPP
#include "iostream"
#include "Victim.hpp"
#include "Peon.hpp"

class Sorcerer
{
private:
	Sorcerer();
	std::string name;
	std::string title;
public:
	Sorcerer(std::string inName, std::string inTitle);
	Sorcerer & operator = (const Sorcerer & copy);
	Sorcerer(const Sorcerer &copy);
	void polymorph(Victim &target) const;
	std::string getName() const;
	std::string getTitle() const;
	~Sorcerer();
};
std::ostream & operator<< (std::ostream& out, const Sorcerer & obj);

#endif //EX00_SORCERER_HPP
