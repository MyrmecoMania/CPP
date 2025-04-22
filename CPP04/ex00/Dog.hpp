/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:31:04 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:21:18 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"

class Dog : public Animal
{
  public:
    Dog( void );
    virtual ~Dog( void );
    Dog(const Dog &ct);
    Dog &operator=( const Dog &ct);

    void  makeSound( void ) const;
};
