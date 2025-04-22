/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:55:35 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:22:00 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
  public:
    WrongCat( void );
    virtual ~WrongCat( void );
    WrongCat(const WrongCat &ct);
    WrongCat &operator=( const WrongCat &ct);

    void  makeSound( void ) const;
};
