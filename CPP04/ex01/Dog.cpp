/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:58:21 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:27:39 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void )
{
  std::cout << "default dog constructor called" << std::endl;
  type = "Dog";
  _brain = new Brain();
}

Dog::Dog( const Dog &ct) : Animal(ct)
{
  type = ct.type;
  _brain = new Brain(*(ct.getBrain()));
}

Dog &Dog::operator=( const Dog &ct )
{
  type = ct.type;
  delete _brain;
  _brain = new Brain(*(ct.getBrain()));
  return (*this);
}

Dog::~Dog( void )
{
  delete _brain;
  std::cout << "dog destroyer called" << std::endl;
}

void  Dog::makeSound( void ) const
{
  std::cout << "Bark!" << std::endl;
}

Brain *Dog::getBrain( void ) const
{
  return (_brain);
}
