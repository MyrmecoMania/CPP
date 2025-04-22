/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:31:21 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:27:27 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void )
{
  std::cout << "default Cat constructor called" << std::endl;
  type = "Cat";
  _brain = new Brain();
}

Cat::Cat( const Cat &ct) : Animal(ct)
{
  type = ct.type;
  _brain = new Brain(*(ct.getBrain()));
}

Cat &Cat::operator=( const Cat &ct )
{
  type = ct.type;
  delete _brain;
  _brain = new Brain(*(ct.getBrain()));
  return (*this);
}

Cat::~Cat( void )
{
  delete _brain;
  std::cout << "Cat destroyer called" << std::endl;
}

void  Cat::makeSound( void ) const
{
  std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain( void ) const
{
  return (_brain);
}
