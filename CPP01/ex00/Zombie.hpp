/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:42:33 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:06:01 by enorie           ###   ########.fr       */
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

	private:
		std::string	_name;
};

void	randomChump ( std::string name );
Zombie*	newZombie(std::string name);

#endif
