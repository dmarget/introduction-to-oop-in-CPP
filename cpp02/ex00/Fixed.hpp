//
// Created by Duncan Marget on 5/28/21.
//

#ifndef EX00_FIXED_HPP
#define EX00_FIXED_HPP
#include <iostream>
#include <string>
class Fixed
{
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(const Fixed & copy);
	Fixed&	operator=(const Fixed&);
	int		getRawBits() const;
	void	setRawBits(int const bit);
	~Fixed();
};


#endif //EX00_FIXED_HPP
