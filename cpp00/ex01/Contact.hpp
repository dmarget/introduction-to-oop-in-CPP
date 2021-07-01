//
// Created by Duncan Marget on 5/18/21.
//
#include <iostream>
#ifndef EX01_CONTACT_HPP
#define EX01_CONTACT_HPP

class Contact
{
	int id;
	int count_contact;
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string login;
	std::string postal_address;
	std::string email_address;
	std::string	phone_number;
	std::string birthday_date;
	std::string favorite_meal;
	std::string underwear_color;
	std::string darkest_secret;
public:
	Contact();
	void add( Contact mass[8] ,int id);
	void ft_cmd(Contact mass[8] ,int id);
	void GetInfo(void);
	void SetContact();
	void  GetMiniInfo(void);
};


#endif //EX01_CONTACT_HPP
