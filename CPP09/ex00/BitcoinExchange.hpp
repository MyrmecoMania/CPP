/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:25:35 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 10:49:18 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <map>
#include <algorithm>
#include <stdlib.h>

class BitcoinExchange {
	public:
		BitcoinExchange();
    	~BitcoinExchange();
    	BitcoinExchange(const BitcoinExchange &cpy);
    	BitcoinExchange	&operator=(const BitcoinExchange &cpy);
		std::string		findValue(std::string	dateValue);
		std::map<std::string, double>	getValues() const;
	private:
		std::map<std::string, double>	_values;
};
