/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:40:28 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 16:11:36 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") { _type = "ice"; }

Ice::~Ice() {}

Ice &Ice::operator=(const Ice &cpy)
{
	_type = cpy.getType();
	return *this;
}

Ice::Ice(const Ice &cpy) : AMateria(cpy)
{
	_type = cpy.getType();
}

Ice	*Ice::clone() const
{
	return new Ice();
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots ans ice bolt at " << target.getName() << " *" << std::endl;
}