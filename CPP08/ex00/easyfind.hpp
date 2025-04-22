/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:45:56 by enorie            #+#    #+#             */
/*   Updated: 2024/10/28 17:09:19 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

template <typename T> int easyfind(T container, int i) {
	typename T::iterator it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::runtime_error("No occurence");
	return (*it);
};
