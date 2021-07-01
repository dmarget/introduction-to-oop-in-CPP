#include "Phonebook.hpp"
#include "iostream"
void Phonebook::Add()
{
	std::string str;

	if (contact_count > 7)
	{
		std::cout << "phone book is fool" << std::endl;
		return;
	}
	contact[contact_count++].SetContact();
}

void Phonebook::table(void)
{
	std::cout << "---------------------------------------------" << std:: endl;
	std::cout << "    index |first name| last name| nickname " << std:: endl;
}

void Phonebook::ft_cmd(std::string str)
{
	if (str == "ADD")
	{
		this->Add();
	}
	else if (str == "SEARCH")
	{
		this->search();
	}
	else if (str == "EXIT")
		exit (0);
	else if (std::cin)
		std::cout << "CMD not found" << std::endl;

}

void Phonebook::process()
{
	std::string cmd;
	while (1)
	{
		if (std::cin.eof() || !std::cin)
			return;
		std::cout << "Action > ";
		std::getline(std::cin, cmd);
		this->ft_cmd(cmd);
	}
}

bool Phonebook::is_number(std::string str)
{
	int i = 0;
	int len = str.length();

	while (i < len)
	{
		if (isdigit(str[i]) != 0)
			return 0;
		i++;
	}
	return 1;
}

void Phonebook::search()
{
	std::string str;
	int index;

	table();
	for (int i = 0; i < contact_count; i++)
	{
		std::cout.width(10);
		std::cout << std::right <<i + 1 << "|";
		contact[i].GetMiniInfo();
		std::cout << std::endl;
	}
	if (contact_count != 0)
	{
		std::cout << "Id > ";
		std::getline(std::cin, str);
		if (std::cin.eof())
			return;
	if (is_number(str) == 0)
	{
		index = atoi(str.c_str()) - 1;
		if (0 <= index && index < contact_count)
			this->contact[index].GetInfo();
		else
			std::cout << "No contact with such index" << std::endl;
	}
	else
		std::cout << "Invalid index" << std::endl;
	}
}

Phonebook::Phonebook()
{
	contact_count = 0;
}