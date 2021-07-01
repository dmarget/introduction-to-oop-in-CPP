//
// Created by Duncan Marget on 6/11/21.
//
#include "iostream"
#include "Casting.hpp"
void char_cast(double &d,char &c)
{
	try
	{
		if (d >= 33 && d <= 127)
			c = static_cast<char>(d);
		else if (d < 0 || d >= 127)
			throw std::string("impossible");
		else
			throw std::string("Not displayable");
		std::cout << COLOR_RED"char: " << c << COLOR_RESET<< std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "char: "<< ex << std::endl;
	}

}

void int_cast(int &i, double &d, char *arg)
{
	try
	{
		if (d > 2147483647 || d < -2147483648 || std::strncmp("nan", arg, 3) == 0)
			throw std::string("impossible");
		i = static_cast<int>(d);
		std::cout << COLOR_BLUE"int: " << i << COLOR_RESET <<  std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "int: "<< ex << std::endl;
	}
}

void float_cast(float &f, double &d)
{
	try
	{
		f = static_cast<float>(d);
		if (f - static_cast<int>(f) != 0.f)
			std::cout << COLOR_GREEN"float: " << f << "f"COLOR_RESET << std::endl;
		else
			std::cout << COLOR_GREEN"float: " << f << ".0f"COLOR_RESET << std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "float: "<< ex << std::endl;
	}
}

void  double_cast(double &d)
{
	try
	{
		d = static_cast<double>(d);
		if (d - static_cast<int>(d) != 0.f)
			std::cout << COLOR_YELLOW"double: "COLOR_RESET << d << std::endl;
		else
			std::cout << COLOR_YELLOW"double: " << d << ".0"COLOR_RESET << std::endl;
	}
	catch(const std::string & ex)
	{
		std::cerr << "double: "<< ex << std::endl;
	}
}