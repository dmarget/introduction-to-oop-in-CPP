//
// Created by Duncan Marget on 5/18/21.
//

#include "Contact.hpp"

void Contact::GetInfo()
{
	std::cout << "first name      |" << std::right << this->first_name << std::endl;
	std::cout << "last name       |" << std::right << this->last_name << std::endl;
	std::cout << "nickmane        |" << std::right << this->nickname << std::endl;
	std::cout << "login           |" << std::right << this->login << std::endl;
	std::cout << "postal address  |" << std::right << this->postal_address << std::endl;
	std::cout << "email adress    |" << std::right << this->email_address << std::endl;
	std::cout << "phone number    |" << std::right << this->phone_number << std::endl;
	std::cout << "birthday        |" << std::right << this->birthday_date << std::endl;
	std::cout << "favorite meal   |" << std::right << this->favorite_meal << std::endl;
	std::cout << "underwear color |" << std::right << this->underwear_color << std::endl;
	std::cout << "darkest secret  |" << std::right << this->darkest_secret << std::endl;
}

void  Contact::GetMiniInfo()
{
	std::string str;
	str = this->first_name;
	std::cout.width(10);
	if (str.length() > 9)
			str[9] = '.';
	std::cout << std::right << str.substr(0, 10) << "|";
	str =  this->last_name;
	std::cout.width(10);
	if (str.length() > 9)
		str[9] = '.';
	std::cout << std::right << str.substr(0, 10) << "|";
	str =  this->nickname;
	std::cout.width(10);
	if (str.length() > 9)
		str[9] = '.';
	std::cout << std::right << str.substr(0, 10);
	std::cout << std::endl;
}

Contact::Contact()
{
	id = 0;
	count_contact = 0;
	first_name = "";
	last_name = "";
	nickname = "";
	login = "";
	postal_address = "";
	email_address = "";
	phone_number = "";
	birthday_date = "";
	favorite_meal = "";
	underwear_color = "";
	darkest_secret = "";
}

void Contact::SetContact()
{
	std::string str;

	if (!std::cin)
		return;
	std::cout << "first name > ";
	std::getline(std::cin, str);
	this->first_name = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "last name > ";
	std::getline(std::cin, str);
	last_name = str;
	//----------------------
	if (!std::cin)
		return;
	std::cout << "nickname > ";
	std::getline(std::cin, str);
	nickname = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "login > ";
	std::getline(std::cin, str);
	login = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "postal address > ";
	std::getline(std::cin, str);
	postal_address = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "email address > ";
	std::getline(std::cin, str);
	email_address = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "phone number > ";
	std::getline(std::cin, str);
	phone_number = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "birthday date > ";
	std::getline(std::cin, str);
	birthday_date = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "favorite meal > ";
	std::getline(std::cin, str);
	favorite_meal = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "underwear color > ";
	std::getline(std::cin, str);
	underwear_color = str;
	//-----------------------
	if (!std::cin)
		return;
	std::cout << "darkest secret > ";
	std::getline(std::cin, str);
	darkest_secret = str;
	//-----------------------
}