/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:59:38 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:21:39 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
  std::cout << "default Wronganimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal( void )
{
  std::cout << "Wronganimal  destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal &ct)
{
  *this = ct;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal &ct )
{
  this->type = ct.type;
  return (*this);
}

std::string WrongAnimal::getType( void ) const
{
  return (type);
}

void  WrongAnimal::makeSound( void ) const
{
  std::cout << "Unexistant noise" << std::endl;
}
