//
// Created by Duncan Marget on 6/13/21.
//

#include "Span.hpp"

Span::Span(unsigned int size): _size(size)
{
}

Span & Span::operator=(const Span &copy)
{
	if (this == &copy)
		return *this;
	_size = copy._size;
	vector = copy.vector;
	return *this;
}

int Span::longestSpan()
{
	if (vector.empty())
		throw std::length_error("array is empty.");
	std::vector<int>::iterator min;
	std::vector<int>::iterator max;

	min = std::min_element(vector.begin(), vector.end());
	max = std::max_element(vector.begin(), vector.end());
	return abs(*max - *min);
}

int Span::shortestSpan()
{
	if (!vector.empty())
	{
		if (vector.size() > 1)
			return (*++vector.begin() - *vector.begin());
	}
	else
		return (*vector.begin());
	throw std::length_error("array is empty.");
}

Span::Span(const Span &copy)
{
	*this = copy;
}

void Span::addNumber(int number)
{
	if (vector.size() < _size)
	{
		vector.push_back(number);
		std::sort(vector.begin(), vector.end());
	}
	else
		throw std::out_of_range("out of range.");
}

Span::~Span()
{
	vector.clear();
}