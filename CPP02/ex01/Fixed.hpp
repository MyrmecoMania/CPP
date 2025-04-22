/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 19:58:06 by enorie            #+#    #+#             */
/*   Updated: 2024/07/10 13:46:41 by enorie           ###   ########.fr       */
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
};

std::ostream	&operator<<(std::ostream &stream, Fixed const &f);

#endif
