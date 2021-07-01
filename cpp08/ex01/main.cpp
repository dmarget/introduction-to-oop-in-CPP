#include <iostream>
#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "-----------------------------" << std::endl;
	try
	{
		sp.addNumber(80);
		std::cout  << sp.shortestSpan()  << std::endl;
		std::cout  << sp.longestSpan()  << std::endl;
	}
	catch (std::exception & exc)
	{
		std::cout << exc.what() << std::endl;
	}

//	Span sp3 = Span(50000);
//	std::vector<int> range(50000);
//	range[2] = 13;
//	try
//	{
//		sp3.addNumber(range.begin(), range.end());
//		std::cout << sp3.longestSpan();
//		std::cout << sp3.shortestSpan();
//	}
//	catch (std::exception & exc)
//	{
//		std::cout << exc.what() << std::endl;
//	}
}
