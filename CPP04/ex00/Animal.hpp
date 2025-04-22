/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:51:04 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:20:38 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Animal
{
  protected:
    std::string type;
  public:
    Animal( void );
    virtual ~Animal( void );
    Animal(const Animal &ct);
    Animal &operator=( const Animal &ct);

    virtual void  makeSound( void ) const;
    std::string  getType( void ) const;
};
