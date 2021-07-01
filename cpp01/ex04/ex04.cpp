#include <iostream>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *str_pointer = &str;
	std::string &str_reference = str;
	std::cout << *str_pointer << std::endl;
	std::cout << str_reference << std::endl;
	return 0;
}
