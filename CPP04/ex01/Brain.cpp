/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:16:32 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:27:16 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void )
{
  std::cout << "Brain default constructor called" << std::endl;
}

Brain::~Brain( void )
{
  std::cout << "Brain default destructor called" << std::endl;
}

Brain::Brain( const Brain &ct )
{
  *this = ct;
}

Brain &Brain::operator=( const Brain &ct )
{
  for (int i = 0; i < 100; ++i)
    ideas[i] = ct.ideas[i];
  return (*this);
}

std::string  *Brain::getIdeas()
{
  return (ideas);
}
