/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:52:30 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 15:08:59 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void	swap(T &a, T &b)
{
	T t;
	t = b;
	b = a;
	a = t;
}

template <typename T> T		min(T &a, T &b)
{
	if (a < b)
		return a;
	return b;
}

template <typename T> T		max(T &a, T &b)
{
	if (a > b)
		return a;
	return b;
}
