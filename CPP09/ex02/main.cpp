/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:13:39 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 11:28:17 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
	if (argc < 2) {
		std::cerr << "Error: wrong arg: ./PmergeMe [list of positive ints]" << std::endl;
		return (1);
	}
	try {
		PmergeMe pmerge(argv);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
}
