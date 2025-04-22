/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:57:19 by enorie            #+#    #+#             */
/*   Updated: 2024/10/28 17:18:38 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	try {
		Span test = Span(2);
		test.addNumber(6);
		test.addNumber(3);
		test.addNumber(17);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		Span test1 = Span(2);
		test1.addNumber(6);
		test1.longestSpan();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	Span test = sp;
	Span test1 = test;
	std::cout << test.shortestSpan() << std::endl;
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << test1.longestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << std::endl << std::endl;
	Span sp1 = Span(11000);
	std::vector<int>	vec;
	for (int i = -5000; i < 6000; i++)
		vec.push_back(i);
	sp1.addRange(vec.begin(), vec.end());
	std::cout << sp1.shortestSpan() << std::endl;
	std::cout << sp1.longestSpan() << std::endl;
	return 0;
}
