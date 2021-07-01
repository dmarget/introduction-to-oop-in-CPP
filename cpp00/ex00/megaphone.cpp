#include <iostream>

int main(int argc, char **argv)
{
	int i = 0;
	int j;
	std::string str("* LOUD AND UNBEARABLE FEEDBACK NOISE *");

	if (argc > 1)
		while (argv[++i])
		{
			j = -1;
			str = std::string(argv[i]);
			while (str[++j])
				std::cout << (char) std::toupper(str[j]);
		}
	std::cout << std::endl;
}