/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:59:38 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:28:04 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal( void )
{
  std::cout << "default Aanimal constructor called" << std::endl;
}

AAnimal::~AAnimal( void )
{
  std::cout << "Aanimal  destructor called" << std::endl;
}

AAnimal::AAnimal( const AAnimal &ct)
{
  *this = ct;
}

AAnimal &AAnimal::operator=( const AAnimal &ct )
{
  type = ct.type;
  return (*this);
}

std::string AAnimal::getType( void ) const
{
  return (type);
}

void  AAnimal::makeSound( void ) const
{
  std::cout << "Unexistant noise" << std::endl;
}
