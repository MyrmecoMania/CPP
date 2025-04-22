/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:55:35 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:28:44 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "AAnimal.hpp"

class Cat : public AAnimal
{
  public:
    Cat( void );
    virtual ~Cat( void );
    Cat(const Cat &ct);
    Cat &operator=( const Cat &ct);

    Brain *getBrain() const;
    void  makeSound( void ) const;
  private:
    Brain *_brain;
};
