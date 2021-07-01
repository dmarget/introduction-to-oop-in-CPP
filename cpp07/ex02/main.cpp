#include "Array.hpp"
#include "iostream"

int main()
{
	Array<std::string> str(3);

	str[0] = "odin";
	try {
		str[1] = "dva";;
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}
	try {
		str[2] = "tri";
	}catch (std::exception &exception){
		std::cerr << exception.what() << std::endl;
	}

	for (size_t i = 0; i < str.getSize(); i++)
		std::cout << "str[" << i << "] = " << str[i]  << std::endl;

	std::cout << "Copy str :" << std::endl;
	Array<std::string> str_copy(str);
	str[0] = "vosem";
	std::cout << "strcopy[0] = "  << str_copy[0]  << std::endl;
	std::cout << "str[0] = "  << str[0]  << std::endl;

}