//
// Created by Duncan Marget on 6/13/21.
//

#ifndef _EX00_EASYFIND_H
#define _EX00_EASYFIND_H
#include <algorithm>
#include <iostream>

class not_found : public std::exception
{
	virtual const char* what() const throw()
	{
		return ("Element no found");
	}
};

template <typename T, typename F>
F easyfind(T &t, F v)
{
	if (std::find(t.begin(), t.end(), v) != t.end())
		return *std::find(t.begin(), t.end(), v);
	else
		throw not_found();
}

#endif //_EX00_EASYFIND_H
