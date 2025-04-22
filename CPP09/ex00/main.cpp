/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:25:42 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 10:54:50 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Wrong number of arguments: ./btc [input file]" << std::endl;
		return (1);
	}
	try {
		std::fstream			fs1;
		std::string				line;
		const std::string		result;
		BitcoinExchange	btc;
		fs1.open(argv[1], std::fstream::in);
		if (!fs1)
			throw std::runtime_error ("Error: Can't open file!");
		getline(fs1, line);
		if (line != "date | value")
			throw std::runtime_error("First line is not the right format (DATE | VALUE) :" + line);
		while (getline(fs1, line))
			std::cout << btc.findValue(line);
		return (0);
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
		return (1);
	}
}
