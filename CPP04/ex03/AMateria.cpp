/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:39:49 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 18:12:06 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) : _type(type)  {};

AMateria::~AMateria() {};

AMateria &AMateria::operator=(const AMateria &cpy) {
	_type = cpy.getType();
	return *this;
};

AMateria::AMateria(const AMateria &cpy)
{
	*this = cpy;
}

std::string const &AMateria::getType() const
{
	return (_type);
}

void	AMateria::use(ICharacter &target)
{
	std::cout << "YOU HAVE NO POWER HERE!, said "  << target.getName() << std::endl;
}