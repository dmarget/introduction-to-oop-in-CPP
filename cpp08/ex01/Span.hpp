//
// Created by Duncan Marget on 6/13/21.
//

#ifndef EX01_SPAN_HPP
#define EX01_SPAN_HPP
#include "iostream"
#include "vector"
#include "algorithm"

class Span
{
private:
	unsigned int _size;
	std::vector<int> vector;
public:
	template < class Iterator >
	void        addNumber(Iterator begin, Iterator end)
	{
		if (end - begin <= _size)
			std::copy(begin, end, std::back_inserter(vector));
		else
			throw std::length_error("range small");
	}
	Span(unsigned int size);
	void addNumber(int number);
	Span(Span const &copy);
	int shortestSpan();
	int longestSpan();
	Span &operator=(Span const &copy);
	virtual ~Span();
};


#endif //EX01_SPAN_HPP
