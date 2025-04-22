/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:59:54 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 15:10:07 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T> void	print(T a)
{
	std::cout << a << std::endl;
}

template <typename T, typename F>
void  iter(T *array, int t, F f)
{
	for(int i = 0; i != t; i++)
		f(array[i]);
}
