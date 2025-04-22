/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 23:13:09 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:02:05 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
  public:
    FragTrap();
    FragTrap( std::string name );
    FragTrap(const FragTrap &cpy);
    FragTrap &operator=(const FragTrap &cpy);
    ~FragTrap( void );
    void  highFivesGuys( void );
};
