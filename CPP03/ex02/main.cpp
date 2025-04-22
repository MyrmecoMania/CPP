/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:39:34 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:02:11 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main( void )
{
  FragTrap  st("Paulo");
  FragTrap  cst = st;;
  FragTrap  cst2(cst);

  cst.attack("BIG boy");
  st.attack("little boy");
  st.beRepaired(5);
  st.takeDamage(5);
  st.highFivesGuys();
  return (0);
}
