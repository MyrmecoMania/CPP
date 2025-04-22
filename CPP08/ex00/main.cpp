/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:45:59 by enorie            #+#    #+#             */
/*   Updated: 2024/10/28 17:08:43 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>

int main()
{
	try {
		std::vector<int> i;
		i.push_back(1);
		i.push_back(2);
		std::cout << easyfind(i, 1) << std::endl;
		std::cout << easyfind(i, 7) << std::endl;
	}
	catch(std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
