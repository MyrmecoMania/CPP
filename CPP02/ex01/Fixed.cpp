/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:58:08 by root              #+#    #+#             */
/*   Updated: 2024/07/10 13:58:15 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
  _nbr = 0;
  std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

Fixed::Fixed(const int integer)
{
	std::cout << "Int constructor called" << std::endl;
  _nbr = (integer << _bits);
}

Fixed::Fixed(const float floating_point)
{
	std::cout << "Float constructor called" << std::endl;
	_nbr = roundf(floating_point * (1 << _bits));
}

Fixed::~Fixed( void )
{
  std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
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

std::ostream	&operator<<(std::ostream &os, Fixed const &f)
{
	os << f.toFloat();
	return (os);
}
