/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:39:14 by ygille            #+#    #+#             */
/*   Updated: 2025/02/26 12:16:22 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::frac = 8;

Fixed::Fixed() : value(0)
{

}

Fixed::Fixed(const int value) : value(value << this->frac)
{

}

Fixed::Fixed(const float value) : value(roundf(value * (1 << this->frac)))
{

}

Fixed::Fixed(const Fixed& other)
{
	*this = other;
}

Fixed&	Fixed::operator=(const Fixed& other)
{
	this->setRawBits(other.getRawBits());
	return (*this);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}

Fixed::~Fixed()
{

}

int		Fixed::getRawBits() const
{
	return (this->value);
}

void	Fixed::setRawBits(const int raw)
{
	this->value = raw;
}

float	Fixed::toFloat() const
{
	return ((float)this->value / (float)(1 << this->frac));
}

int		Fixed::toInt() const
{
	return (this->value >> this->frac);
}


bool Fixed::operator>(const Fixed& other)
{
	return (this->value > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other)
{
	return (this->value < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other)
{
	return (this->value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other)
{
	return (this->value <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other)
{
	return (this->value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other)
{
	return (this->value != other.getRawBits());
}

float Fixed::operator+(const Fixed& other)
{
	return (this->toFloat() + other.toFloat());
}

float Fixed::operator-(const Fixed& other)
{
	return (this->toFloat() - other.toFloat());
}

float Fixed::operator*(const Fixed& other)
{
	return (this->toFloat() * other.toFloat());
}

float Fixed::operator/(const Fixed& other)
{
	return (this->toFloat() / other.toFloat());
}

Fixed Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed	post = *this;
	++this->value;
	return (post);
}

Fixed Fixed::operator--(int)
{
	Fixed	post = *this;
	--this->value;
	return (post);
}

Fixed	&Fixed::min(Fixed &first, Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::min(const Fixed &first, const Fixed &second)
{
	if (first.toFloat() <= second.toFloat())
		return (first);
	else
		return (second);
}

Fixed	&Fixed::max(Fixed &first, Fixed &second)
{
	if (first.toFloat() >= second.toFloat())
		return (first);
	else
		return (second);
}

const Fixed	&Fixed::max(const Fixed &first, const Fixed &second)
{
	else
		return (second);
}
