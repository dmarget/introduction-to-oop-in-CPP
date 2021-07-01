//
// Created by Duncan Marget on 6/12/21.
//

#ifndef EX01_ITER_HPP
#define EX01_ITER_HPP
#include "iostream"
template <typename T>
void print(T &printObject)
{
	std::cout << printObject << std::endl;
}

template <typename T>

void iter(T* array, int len, void (*func) (T &))
{
	for (long int i = 0; i < len; i++)
		func(array[i]);
}



#endif //EX01_ITER_HPP
