//
// Created by Duncan Marget on 6/11/21.
//
#include "iostream"
#include "Casting.hpp"

void ex_char(char &c)
{
	try
	{
		c = static_cast<char>(c);
		std::cout << "char: " << c << std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "char: "<< ex << std::endl;
	}
}

void ex_int(int &i, char &c)
{
	try
	{
		i =static_cast<int>(c);
		std::cout << "int: " << i << std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "int: "<< ex << std::endl;
	}
}

void ex_float(float &f, char &c)
{
	try
	{
		f = static_cast<float>(c);
		std::cout << "float: " << f << std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "float: "<< ex << std::endl;
	}
}

void ex_double(double &d, char &c)
{
	try
	{
		d = static_cast<double>(c);
		std::cout << "double: " << d << std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "double: "<< ex << std::endl;
	}
}