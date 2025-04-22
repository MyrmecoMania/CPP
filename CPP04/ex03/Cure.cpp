/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:40:16 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 16:11:44 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") { _type = "cure"; }

Cure::~Cure() {}

Cure &Cure::operator=(const Cure &cpy)
{
	_type = cpy.getType();
	return *this;
}

Cure::Cure(const Cure &cpy) : AMateria(cpy)
{
	_type = cpy.getType();
}

Cure	*Cure::clone() const
{
	return new Cure();
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}