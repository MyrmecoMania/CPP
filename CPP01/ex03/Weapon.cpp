/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:02:50 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:08:43 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( void ) {

};

Weapon::Weapon( std::string type ) {
	_type = type;
};

Weapon::~Weapon( void ) {

};

const std::string	&Weapon::getType( void ) {
	return (_type);
};

void	Weapon::setType( std::string type ) {
	_type = type;
};
