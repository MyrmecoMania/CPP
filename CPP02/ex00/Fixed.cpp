/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:58:08 by             #+#    #+#             */
/*   Updated: 2024/04/30 22:29:00 by root             ###   ########.fr       */
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
  std::cout << "getRawBits member function called" << std::endl;
  return (_nbr);
}

void  Fixed::setRawBits(int const raw)
{
  _nbr = raw;
}
