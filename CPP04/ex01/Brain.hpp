/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/04 11:16:34 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 15:27:22 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Brain
{
  public:
    Brain( void );
    ~Brain( void );
    Brain( const Brain &ct );
    Brain &operator=( const Brain &ct );
    std::string  *getIdeas();

  private:
    std::string ideas[100];
};
