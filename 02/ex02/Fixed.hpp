/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 10:39:16 by ygille            #+#    #+#             */
/*   Updated: 2025/02/26 12:12:15 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

#pragma once

class	Fixed
{
public:

	Fixed();
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	int		getRawBits() const;
	void	setRawBits(const int raw);
	float	toFloat() const;
	int		toInt() const;

	bool operator>(const Fixed& other);
	bool operator<(const Fixed& other);
	bool operator>=(const Fixed& other);
	bool operator<=(const Fixed& other);
	bool operator==(const Fixed& other);
	bool operator!=(const Fixed& other);

	float operator+(const Fixed& other);
	float operator-(const Fixed& other);
	float operator*(const Fixed& other);
	float operator/(const Fixed& other);

	Fixed operator++();
	Fixed operator--();
	Fixed operator++(int);
	Fixed operator--(int);

	static Fixed&min(Fixed &first, Fixed &second);
	static const Fixed& min(const Fixed &first, const Fixed &second);
	static Fixed& max(Fixed &first, Fixed &second);
	static const Fixed& max(const Fixed &first, const Fixed &second);

private:

	int					value;
	static const int	frac;

};

std::ostream    &operator<<(std::ostream &o, Fixed const &fixed);

#endif