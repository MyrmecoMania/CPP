/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:42:33 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:06:43 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iomanip>
#include <iostream>

class Zombie {

	public:
		Zombie( void );
		Zombie( std::string name);
		~Zombie( void );
		void	announce( void );
		void	setName( std::string name );

	private:
		std::string	_name;
};

Zombie*	zombieHorde( int N, std::string name );

#endif
