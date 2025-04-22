/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:55:35 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:21:06 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Animal.hpp"

class Cat : public Animal
{
  public:
    Cat( void );
    virtual ~Cat( void );
    Cat(const Cat &ct);
    Cat &operator=( const Cat &ct);

    void  makeSound( void ) const;
};
