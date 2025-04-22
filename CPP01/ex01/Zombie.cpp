/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 13:49:29 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:06:36 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void ) {

};

Zombie::~Zombie( void ) {
	std::cout << "Zombie " << _name << " has been destroyed." << std::endl;
};

void  Zombie::announce ( void ) {
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
};

void  Zombie::setName( std::string name ) {
	_name = name;
};
