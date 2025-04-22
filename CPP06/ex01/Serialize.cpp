/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:30:14 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 11:31:24 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

Serialize::Serialize() {}

Serialize::~Serialize() {}

Serialize::Serialize(const Serialize &cpy)
{
	*this = cpy;
}

Serialize	&Serialize::operator=(const Serialize &cpy)
{
	if (this == &cpy)
		return (*this);
	return (*this);
}

uintptr_t Serialize::serialize(Data *ptr)
{
  return reinterpret_cast<uintptr_t>(ptr);
}
Data *Serialize::deserialize(uintptr_t raw)
{
  return reinterpret_cast<Data *>(raw);
}
