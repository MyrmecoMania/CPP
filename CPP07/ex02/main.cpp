/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:07:21 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 15:20:22 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	try {
		Array<int> in(10);
		for(int i = 0; i < 10; i++)
			in[i] = i;
		for(int i = 0; i < 10; i++)
			std::cout << in[i] << std::endl;
		std::cout << in.getArray() << std::endl;
		Array<int> copy(in);
		Array<int> copy1 = in;
		std::cout << copy.getArray() << std::endl;
		std::cout << copy1.getArray() << std::endl;
		for(int i = 0; i < 10; i++)
			std::cout << copy[i] << std::endl;
		for(int i = 0; i < 10; i++)
			std::cout << copy1[i] << std::endl;
		std::cout << in[10] << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Array<std::string> in(10);
		for(int i = 0; i < 10; i++)
			in[i] = "hola chico";
		for(int i = 0; i < 10; i++)
			std::cout << in[i] << std::endl;
		std::cout << in[-1] << std::endl;
	}
	catch (std::out_of_range &e) {
		std::cout << e.what() << std::endl;
	}
}
