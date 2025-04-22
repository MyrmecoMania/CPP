/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:35:56 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:02:01 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {}

ScavTrap::ScavTrap( std::string name ) : ClapTrap( name )
{
  _hitpoints = 100,
  _energy = 50;
  _attack = 20;
  std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ct) : ClapTrap(ct)
{
  std::cout << "Copy constructor called" << std::endl;
  *this = ct;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _name = f._name;
  return (*this);
}

ScavTrap::~ScavTrap( void )
{
  std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

void  ScavTrap::attack(const std::string& target)
{
  if (_energy > 0)
  {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
    _energy--;
  }
  else
    std::cout << "ScavTrap " << _name << " has no more energy!" << std::endl;
}

void ScavTrap::guardGate( void )
{
  std::cout << "ScavTrap " << _name << " is now in guard mode" << std::endl;
}
