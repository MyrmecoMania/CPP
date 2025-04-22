/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 17:03:09 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 19:17:25 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource() : _index(0) {};

MateriaSource::MateriaSource(const MateriaSource &cpy) {
	for (int i = 0; cpy.inventory[i]; i++)
		inventory[i] = cpy.inventory[i]->clone();
	_index = cpy.getIndex();
};

MateriaSource &MateriaSource::operator=(const MateriaSource &cpy) {
	for (int i = 0; _index > i; i++)
		delete inventory[i];
	for (int i = 0; cpy.inventory[i]; i++)
		inventory[i] = cpy.inventory[i]->clone();
	_index = cpy.getIndex();
	return *this;
};

void MateriaSource::learnMateria(AMateria* m) {
	if (_index < 4)
		inventory[_index++] = m;
};

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; inventory[i]; i++)
		if (type == inventory[i]->getType())
			return inventory[i]->clone();
	return 0;
};

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < _index; i++)
		delete inventory[i];
}

int	MateriaSource::getIndex() const
{
	return (_index);
}