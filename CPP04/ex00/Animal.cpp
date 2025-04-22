/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:59:38 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:20:33 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void )
{
  std::cout << "default animal constructor called" << std::endl;
}

Animal::~Animal( void )
{
  std::cout << "animal  destructor called" << std::endl;
}

Animal::Animal( const Animal &ct)
{
  *this = ct;
}

Animal &Animal::operator=( const Animal &ct )
{
  type = ct.type;
  return (*this);
}

std::string Animal::getType( void ) const
{
  return (type);
}

void  Animal::makeSound( void ) const
{
  std::cout << "Unexistant noise" << std::endl;
}
