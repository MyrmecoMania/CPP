/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:31:21 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:20:55 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
  std::cout << "default Cat constructor called" << std::endl;
  type = "Cat";
}

Cat::Cat( const Cat &ct) : Animal(ct)
{
  *this = ct;
}

Cat &Cat::operator=( const Cat &ct )
{
  type = ct.type;
  return (*this);
}

Cat::~Cat( void )
{
  std::cout << "Cat destroyer called" << std::endl;
}

void  Cat::makeSound( void ) const
{
  std::cout << "Meow!" << std::endl;
}
