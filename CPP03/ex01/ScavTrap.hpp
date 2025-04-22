/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 22:35:59 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:02:02 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
  public:
    ScavTrap();
    ScavTrap( std::string name );
    ScavTrap( const ScavTrap &cpy );
    ScavTrap &operator=( const ScavTrap &cpy );
    ~ScavTrap();
    void  attack(const std::string& target);
    void  guardGate( void );
};
