/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/28 22:01:45 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:01:55 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ClapTrap
{
  public:
    ClapTrap( std::string name );
    ~ClapTrap();
    ClapTrap(const ClapTrap &ct);
    ClapTrap &operator=( const ClapTrap &ct);
    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

  private:
    std::string _name;
    int         _hitpoints;
    int         _energy;
    int         _attack;
    ClapTrap();
};
