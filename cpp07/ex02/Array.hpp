//
// Created by Duncan Marget on 6/12/21.
//

#ifndef EX02_ARRAY_HPP
#define EX02_ARRAY_HPP
#include "iostream"

class OutOfRangeException : public std::exception
{
public:
	const char * what() const throw()
	{
		return ("index out of range!");
	}
};

template<typename T>
class Array
{
private:
	T *_array;
	unsigned int _len;
public:
	Array() : _array(NULL), _len(){};

	Array(unsigned int n) : _len(n)
	{
		_array = new T[n]();
	};

	Array(Array const &copy)
	{
		if (copy._len > 0)
		{
			_array = new T[copy._len]();
			for (unsigned int i = 0; i < copy._len; i++)
				_array[i] = copy._array[i];
		}
		_len = copy._len;
	}

	virtual ~Array()
	{
		delete [] _array;
	};

	Array &operator=(const Array &other)
	{
		if (this == &other)
			return *this;
		if (_array)
			delete [] _array;
		_len = other._len;
		_array = new T[_len];
		for (unsigned int i = 0; i < _len; ++i) {
			_array[i] = other._array[i];
		}
		return *this;
	};

	T & operator[](unsigned int i)
	{
		if (i >= _len)
			throw OutOfRangeException();
		else
			return _array[i];
	}

	size_t getSize() const
	{
		return _len;
	};

};


#endif //EX02_ARRAY_HPP
