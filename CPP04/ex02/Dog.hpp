/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 19:31:04 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:29:31 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AAnimal.hpp"

class Dog : public AAnimal
{
  public:
    Dog( void );
    virtual ~Dog( void );
    Dog(const Dog &ct);
    Dog &operator=( const Dog &ct);

    Brain *getBrain() const;
    void  makeSound( void ) const;
  private:
    Brain *_brain;
};
