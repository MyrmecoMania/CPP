/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 23:13:06 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:02:04 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {}

FragTrap::FragTrap( std::string name ) : ClapTrap( name )
{
  _hitpoints = 100,
  _energy = 100;
  _attack = 30;
  std::cout << "FragTrap " << _name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ct) : ClapTrap( ct )
{
  *this = ct;
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _name = f._name;
  _hitpoints = f._hitpoints;
  _energy = f._energy;
  _attack = f._attack;
  return (*this);
}

FragTrap::~FragTrap( void )
{
  std::cout << "FragTrap " << _name << " destroyed" << std::endl;
}

void  FragTrap::highFivesGuys( void )
{
  std::cout << "FragTrap " << _name << " high fives everybody!" << std::endl;
}
