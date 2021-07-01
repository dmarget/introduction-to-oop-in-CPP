//
// Created by Duncan Marget on 5/28/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
//	std::cout << "Default constructor called" << " " << this << std::endl;
	std::cout << "Default constructor called" << std::endl;
}

int Fixed::getRawBits() const
{
//	std::cout << "getRawBits member function called" << " " <<  this <<  std::endl;
	std::cout << "getRawBits member function called" <<  std::endl;
	return value;
}

void Fixed::setRawBits(const int bit)
{
	value = bit;
}

Fixed::Fixed(const Fixed& copy): value(copy.getRawBits())
{
//	std::cout << "Copy constructor called" << " " << this <<  std::endl;
	std::cout << "Copy constructor called" <<  std::endl;
}

Fixed& Fixed::operator = (const Fixed& copy)
{
//	std::cout << "Assignation operator called" <<" " << this << std::endl;
	std::cout << "Assignation operator called" << std::endl;
	value = copy.value;
	return *this;
}

Fixed::~Fixed()
{
//	std::cout << "Default destructor called" <<" " <<  this << std::endl;
	std::cout << "Default destructor called" << std::endl;
}