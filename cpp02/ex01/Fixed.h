//
// Created by Duncan Marget on 5/29/21.
//

#ifndef EX01_FIXED_H
#define EX01_FIXED_H
#include "iostream"
#include "cmath"
class Fixed
{
private:
	int value;
	const static int bit = 8;
public:
	Fixed();
	Fixed(int Num);
	Fixed(float Num);
	float toFloat() const;
	int toInt() const;
	Fixed(const Fixed & copy);
	Fixed&	operator=(const Fixed& fixed);
	int		getRawBits() const;
	void	setRawBits(int const bit);
	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& obj);

#endif //EX01_FIXED_H
