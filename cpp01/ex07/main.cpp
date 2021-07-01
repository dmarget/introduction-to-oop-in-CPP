#include <iostream>
#include <cstdlib>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return 1;
	}
	std::string     line;
	std::string     fileName(argv[1]);
	std::string     s1(argv[2]);
	std::string     s2(argv[3]);
	std::ifstream   in(fileName);
	std::ofstream   out(fileName + ".replace");
	if (s1.length() == 0)
	{
		std::cout << "Empty string among arguments" << std::endl;
		return 1;
	}
	if (!in || !out)
	{
		std::cout << "Don't open file" << std::endl;
		return 1;
	}
	while (!in.eof())
	{
		size_t count = 0;
		getline(in, line);
		while ((count = line.find(s1, count)) != std::string::npos)
		{
			line.replace(count, s1.length(), s2);
			count = count + s2.length();
		}
		if (in.eof())
			out << line;
		else
			out << line << std::endl;
	}
	return 0;
}
