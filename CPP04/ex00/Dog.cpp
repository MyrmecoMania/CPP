/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:58:21 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:21:12 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
  std::cout << "default dog constructor called" << std::endl;
  type = "Dog";
}

Dog::Dog( const Dog &ct) : Animal(ct)
{
  *this = ct;
}

Dog &Dog::operator=( const Dog &ct )
{
  type = ct.type;
  return (*this);
}

Dog::~Dog( void )
{
  std::cout << "dog destroyer called" << std::endl;
}

void  Dog::makeSound( void ) const
{
  std::cout << "Bark!" << std::endl;
}
