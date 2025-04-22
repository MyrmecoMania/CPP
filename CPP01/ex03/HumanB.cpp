/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:06:21 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:08:19 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) : _name(name) {
	_weapon = NULL;
};

HumanB::HumanB( std::string name, Weapon weapon ) {
	_name = name;
	_weapon = &weapon;
};

HumanB::~HumanB( void ) {

};

void	HumanB::setWeapon ( Weapon& weapon ) {
	_weapon = &weapon;
};

void	HumanB::attack ( void ) {
	if (_weapon)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " has no weapon 💀" << std::endl;
};
