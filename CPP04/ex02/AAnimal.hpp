/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 18:51:04 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:28:11 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "Brain.hpp"

class AAnimal
{
  protected:
    std::string type;
  public:
    AAnimal( void );
    virtual ~AAnimal( void ) = 0;
    AAnimal(const AAnimal &ct);
    AAnimal &operator=( const AAnimal &ct);

    virtual void  makeSound( void ) const = 0;
    std::string  getType( void ) const;
};
