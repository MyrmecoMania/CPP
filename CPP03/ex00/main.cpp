/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 21:39:34 by enorie            #+#    #+#             */
/*   Updated: 2024/07/11 14:01:57 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void )
{
  ClapTrap  ct("Paul");

  ct.attack("little boy");
  ct.takeDamage( 6 );
  ct.beRepaired ( 10 );
  ct.attack("cat");
  ct.attack("dog");
  ct.attack("bird");
  ct.attack("fish");
  ct.attack("bee");
  ct.attack("ant");
  ct.attack("plane");
  ct.attack("car");
  ct.attack("bridge");
  return (0);
}
