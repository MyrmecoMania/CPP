/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:51:04 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:21:44 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class WrongAnimal
{
  protected:
    std::string type;
  public:
    WrongAnimal( void );
    virtual ~WrongAnimal( void );
    WrongAnimal(const WrongAnimal &ct);
    WrongAnimal &operator=( const WrongAnimal &ct);

    void  makeSound( void ) const;
    std::string  getType( void ) const;
};
