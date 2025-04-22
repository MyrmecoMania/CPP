/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:40:05 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 19:17:34 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("nobody"), _index(0) {}

Character::Character(std::string name) : _name(name), _index(0) {}

Character::~Character() {
	for (int i = 0; i < _index; i++)
		delete inventory[i];
}

Character &Character::operator=(const Character &cpy)
{
	_name = cpy.getName();
	for (int i = 0; _index > i; i++)
		delete inventory[i];
	for (int i = 0; cpy.inventory[i]; i++)
		inventory[i] = cpy.inventory[i]->clone();
	_index = cpy.getIndex();
	return *this;
}

Character::Character(const Character &cpy)
{
	for (int i = 0; cpy.getIndex() > i; i++)
		inventory[i] = cpy.inventory[i]->clone();
	_index = cpy.getIndex();
	_name = cpy.getName();
}

std::string	const &Character::getName() const
{
	return (_name);
}

void	Character::equip(AMateria* m)
{
	if (_index < 4)
		inventory[_index++] = m;
}

void	Character::unequip(int idx)
{
	while (idx + 1 < _index)
	{
		inventory[idx] = inventory[idx + 1];
		idx++;
	}
	_index--;
	inventory[idx + 1] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx >= 0 && idx <= 3 && inventory[idx])
		inventory[idx]->use(target);
}

int	Character::getIndex() const
{
	return (_index);
}