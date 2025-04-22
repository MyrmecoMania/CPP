/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:58:08 by enorie            #+#    #+#             */
/*   Updated: 2024/07/10 14:31:46 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
  _nbr = 0;
}

Fixed::Fixed(const Fixed &f)
{
  *this = f;
}

Fixed::Fixed(const int integer)
{
  _nbr = (integer << _bits);
}

Fixed::Fixed(const float floating_point)
{
	_nbr = roundf(floating_point * (1 << _bits));
}

Fixed::~Fixed( void )
{
}

Fixed &Fixed::operator=(const Fixed &f)
{
  setRawBits(f.getRawBits());
  return (*this);
}

int Fixed::getRawBits( void ) const
{
  return (_nbr);
}

float Fixed::toFloat( void ) const
{
  return ((float)_nbr / (float)(1 << _bits));
}

int Fixed::toInt( void ) const
{
  return (_nbr >> _bits);
}

void  Fixed::setRawBits(int const raw)
{
  _nbr = raw;
}

std::ostream	&operator<<(std::ostream &stream, Fixed const &f)
{
	stream << f.toFloat();
	return (stream);
}

bool	Fixed::operator>(Fixed const &f)
{
	if (_nbr > f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<(Fixed const &f)
{
	if (_nbr < f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator>=(Fixed const &f)
{
	if (_nbr >= f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator<=(Fixed const &f)
{
	if (_nbr <= f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator==(Fixed const &f)
{
	if (_nbr == f.getRawBits())
		return (true);
	return (false);
}

bool	Fixed::operator!=(Fixed const &f)
{
	if (_nbr != f.getRawBits())
		return (true);
	return (false);
}

Fixed	Fixed::operator+(Fixed const &f)
{
	_nbr += f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator-(Fixed const &f)
{
	_nbr -= f.getRawBits();
	return (*this);
}

Fixed	Fixed::operator*(Fixed const &f)
{
	_nbr = (toFloat() * f.toFloat()) * (1 << _bits);
	return (*this);
}

Fixed	Fixed::operator/(Fixed const &f)
{
	_nbr = (toFloat() / f.toFloat()) * (1 << _bits);
	return (*this);
}

Fixed	Fixed::operator++()
{
	_nbr++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp(*this);
	++(*this);
	return (temp);
}

Fixed	Fixed::operator--()
{
	_nbr--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp(*this);
	--(*this);
	return (temp);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed const	&Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (b);
	return (a);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (b);
	return (a);
}
