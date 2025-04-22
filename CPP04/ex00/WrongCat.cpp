/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:31:21 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:21:50 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void )
{
  std::cout << "default WrongCat constructor called" << std::endl;
  WrongAnimal::type = "WrongCat";
}

WrongCat::WrongCat( const WrongCat &ct) : WrongAnimal(ct)
{
  *this = ct;
}

WrongCat &WrongCat::operator=( const WrongCat &ct )
{
  type = ct.type;
  return (*this);
}

WrongCat::~WrongCat( void )
{
  std::cout << "WrongCat destroyer called" << std::endl;
}

void  WrongCat::makeSound( void ) const
{
  std::cout << "Meow!" << std::endl;
}
