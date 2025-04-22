/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:39:34 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:02:00 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void )
{
  ScavTrap  st("Paulo");
  ScavTrap  cpy(st);
  ScavTrap  cpy2 = cpy;

  st.attack("little boy");
  cpy.beRepaired(5);
  cpy2.takeDamage(5);
  st.guardGate();
  return (0);
}
