/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:54:05 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 10:54:59 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Error: wrong number of args: ./RPN [reverse polish notation]" << std::endl;
		return (1);
	}
	try {
		RPN rpn(argv[1]);
	}
	catch ( std::exception &e ) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
	return (0);
}
