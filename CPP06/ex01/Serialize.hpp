/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialize.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:30:12 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 11:31:30 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stdint.h>
#include <iostream>

struct Data {
  char  number;
};

class Serialize{

  public:
		static uintptr_t serialize(Data *ptr);
    	static Data *deserialize(uintptr_t raw);
	private:
		Serialize();
		~Serialize();
		Serialize(const Serialize &cpy);
		Serialize &operator=(const Serialize &cpy);

};
