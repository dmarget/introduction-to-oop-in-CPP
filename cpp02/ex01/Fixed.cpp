//
// Created by Duncan Marget on 5/29/21.
//

#include "Fixed.h"

Fixed::Fixed (): value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int Num): value((int)Num << 8)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float Num)
: value((int)(roundf(Num * (float)(1 << bit))))
{
	std::cout << "Float constructor called" << std::endl;
}

float 	Fixed::toFloat() const
{
	return ((float)value / (float)(1 << bit));
}

int 	Fixed::toInt() const
{
	return value >> bit;
}

int Fixed::getRawBits() const

{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits(const int bit)
{
	value = bit;
}

Fixed::Fixed(const Fixed& copy): value(copy.getRawBits()){

	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator = (const Fixed& copy)
{
	value = copy.value;
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::ostream& operator<<(std::ostream& out, const Fixed& obj) {
	out << obj.toFloat();
	return out;
}


Fixed::~Fixed()
{
	std::cout << "Default destructor" << std::endl;
}