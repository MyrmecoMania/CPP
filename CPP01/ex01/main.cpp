/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:05:26 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:06:28 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main( void )
{
    int N = 4;
	Zombie* zombies = zombieHorde(N, "GERARD");
	for (int i = 0; i != N; i++) {
        zombies[i].announce();
    };
    delete[] (zombies);
};
