//
// Created by Duncan Marget on 6/12/21.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP

template <typename T>
void	swap(T & a, T & b)
{
	T t = a;
	a = b;
	b = t;
}

template <typename T>
T		min(T a, T b)
{
	return ( a < b ? a : b);
}

template <typename T>
T 		max(T a, T b)
{
	return ( a > b ? a : b);
}

#endif //EX00_WHATEVER_HPP
