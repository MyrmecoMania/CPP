/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:06:16 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:08:06 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _name(name), _weapon(weapon) {

};

HumanA::~HumanA( void ) {

};

void	HumanA::attack ( void ) {
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
};
