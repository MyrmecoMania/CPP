/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:58:06 by enorie            #+#    #+#             */
/*   Updated: 2024/07/10 14:31:27 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
  private:
    int              _nbr;
    static const int _bits = 8;
  public:
    Fixed();
    Fixed(const Fixed &f);
    Fixed( const int f);
    Fixed( const float f);
    ~Fixed();
    Fixed &operator=(const Fixed &f);
    int   getRawBits( void ) const;
    void  setRawBits( int const raw);
    float toFloat( void ) const;
    int   toInt( void ) const;
    bool	operator>(Fixed const &f);
	bool	operator<(Fixed const &f);
	bool	operator>=(Fixed const &f);
	bool	operator<=(Fixed const &f);
	bool	operator==(Fixed const &f);
	bool	operator!=(Fixed const &f);
	Fixed	operator+(Fixed const &f);
	Fixed	operator-(Fixed const &f);
	Fixed	operator*(Fixed const &f);
	Fixed	operator/(Fixed const &f);
	Fixed	operator++();
	Fixed	operator++(int);
	Fixed	operator--();
	Fixed	operator--(int);
	static Fixed const &min(Fixed const &a, Fixed const &b);
	static Fixed const &max(Fixed const &a, Fixed const &b);
	static Fixed &min(Fixed &a, Fixed &b);
	static Fixed &max(Fixed &a, Fixed &b);
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif
