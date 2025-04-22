/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 11:52:59 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:02:03 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {}

ClapTrap::ClapTrap( std::string name )
{
  _name = name;
  _hitpoints = 10;
  _energy = 10;
  _attack = 0;
  std::cout << "ClapTrap " << _name << " created" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
  std::cout << "ClapTrap " << _name << " destroyed" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
  *this = ct;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &f)
{
  std::cout << "Copy assignment operator called" << std::endl;
  _name = f._name;
  _hitpoints = f._hitpoints;
  _energy = f._energy;
  _attack = f._attack;
  return (*this);
}

void  ClapTrap::attack(const std::string& target)
{
  if (_energy > 0)
  {
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attack << " points of damage!" << std::endl;
    _energy--;
  }
  else
    std::cout << "ClapTrap " << _name << " has no more energy!" << std::endl;
}

void  ClapTrap::takeDamage(unsigned int amount)
{
  std::cout << "ClapTrap " << _name << " took " << amount << " damage" << std::endl;
  _hitpoints -= amount;
  std::cout << "ClapTrap " << _name << " has now " << _hitpoints << " hitpoints" << std::endl;
}

void  ClapTrap::beRepaired(unsigned int amount)
{
  if (_energy > 0)
  {
    std::cout << "ClapTrap " << _name << " repaired for " << amount << " hitpoints" << std::endl;
    _hitpoints += amount;
    _energy--;
    std::cout << "ClapTrap " << _name << " has now " << _hitpoints << " hitpoints" << std::endl;
  }
  else
    std::cout << "ClapTrap " << _name << " has no more energy!" << std::endl;
}
