#include <iostream>
#include "Casting.hpp"

int check_str(char *arg, char &c, double &d,bool &num_flag)
{
	try
	{
		if (std::strlen(arg) == 1 && (arg[0] < '0' || arg[0] > '9'))
			c = static_cast<char>(arg[0]);
		else
		{
			num_flag = 1;
			d = std::stod(arg);
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "char: impossible" << std::endl
				  << "int: impossible" << std::endl
				  << "float: impossible" << std::endl
				  << "double: impossible" << std::endl;
		return (1);
	}
	return 0;
}

int convert(char *str)
{
	bool 	num_flag = false;
	char 	c;
	int		i;
	float 	f;
	double 	d;

	if (check_str(str, c, d, num_flag) == 1)
		return 1;
	if (num_flag)
	{
		char_cast(d, c);
		int_cast(i,d,str);
		float_cast(f, d);
		double_cast(d);
	}
	else
	{
		ex_char(c);
		ex_int(i, c);
		ex_double(d, c);
		ex_float(f, c);
	}
	return 0;
}

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "too many arguments" << std::endl;
	else
		convert(argv[1]);
	return 0;
}
