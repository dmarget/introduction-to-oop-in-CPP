//
// Created by Duncan Marget on 5/18/21.
//
#include "Contact.hpp"
#ifndef EX01_PHONEBOOK_HPP
#define EX01_PHONEBOOK_HPP


class Phonebook
{
private:
	Contact contact[8];
	int contact_count;
public:
	void Add( void);
	void search( void);
	void ft_cmd(std::string str);
	void process();
	bool is_number(std::string str);
	void table();
	Phonebook();
};


#endif //EX01_PHONEBOOK_HPP
