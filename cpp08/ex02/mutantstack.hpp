//
// Created by Duncan Marget on 6/14/21.
//

#ifndef EX02_MUTANTSTACK_HPP
#define EX02_MUTANTSTACK_HPP
#include "iostream"
#include "stack"

template <typename T>
class mutantstack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator					iterator;
	typedef typename std::stack<T>::container_type::const_iterator				const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator			reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator		const_reverse_iterator;

	mutantstack() : std::stack<T>() {};

	virtual ~mutantstack() {};

	mutantstack(const mutantstack &cpMutantStack)
	{
		*this = cpMutantStack;
	}

	mutantstack &operator=(const mutantstack &copy)
	{
		if (this == &copy)
			return *this;
		std::stack<T>::operator=(copy);
		return *this;
	};

	iterator begin()
	{
		return (std::stack<T>::c.begin());
	}

	const_iterator begin() const
	{
		return (std::stack<T>::c.begin());
	}

	iterator end()
	{
		return (std::stack<T>::c.end());
	}

	const_iterator end() const
	{
		return (std::stack<T>::c.end());
	}

	reverse_iterator rbegin()
	{
		return (std::stack<T>::c.rbegin());
	}

	const_reverse_iterator rbegin() const
	{
		return (std::stack<T>::c.rbegin());
	}

	reverse_iterator rend()
	{
		return (std::stack<T>::c.rend());
	}

	const_reverse_iterator rend() const
	{
		return (std::stack<T>::c.rend());
	}
};


#endif //EX02_MUTANTSTACK_HPP
