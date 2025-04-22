/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:25:39 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 10:49:12 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static bool	checkDate(std::string date)
{
	std::string	rest;
	int	year;
	int	month;
	int	day;
	std::size_t	pos;
	pos = date.find("-");
	year = atoi(date.substr(0, pos).c_str());
	rest = date.substr(pos + 1, date.size());
	pos = rest.find("-");
	month = atoi(rest.substr(0, pos).c_str());
	day = atoi(rest.substr(pos + 1, rest.size()).c_str());
	if (year < 2009 || (month < 1 || month > 12) || (day < 1  || day > 31) || (year == 2009 && month == 1 && day < 2))
		return (true);
	if (month == 2 && (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))) {
		if (day > 29)
			return (true);
	} else if (month == 2 && !(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))) {
		if (day > 28)
			return (true);
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 30)
			return (true);
	}
	return (false);
}

BitcoinExchange::BitcoinExchange() {
	std::fstream	database;
	std::string		line;
	std::size_t		pos;
	database.open("data.csv", std::fstream::in);
	if (!database)
		throw std::runtime_error("Can't open database");
	getline(database, line);
	while (getline(database, line))
	{
		pos = line.find(",");
		_values[line.substr(0, pos)] = atof(line.substr(pos + 1, line.size()).c_str());
	}
};

BitcoinExchange::~BitcoinExchange() {

}

std::string	BitcoinExchange::findValue(std::string dateValue)
{
	std::stringstream						result;
	std::string								numberStr;
	std::size_t								pos;
	std::map<std::string,double>::iterator	it;
	double									number;
	pos = dateValue.find("|");
	if (pos == std::string::npos || checkDate(dateValue.substr(0, pos - 1)) || dateValue[pos + 1] != ' ')
		return ("Error: bad input => " + dateValue + "\n");
	it = _values.lower_bound(dateValue.substr(0, pos - 1));
	if (it != _values.begin())
		it--;
	numberStr = dateValue.substr(pos + 2, dateValue.size());
	number = atof(numberStr.c_str());
	if (number < 0)
		return ("Error: not a positive number.\n");
	if (number > 1000)
		return ("Error: number too large.\n");
	result << dateValue.substr(0, pos - 1) + " => " << dateValue.substr(pos + 2, dateValue.size()) + " = " << it->second * number  << std::endl;
	return (result.str());
}

std::map<std::string, double> BitcoinExchange::getValues() const { return (_values); }


BitcoinExchange::BitcoinExchange(const BitcoinExchange &cpy) : _values(cpy.getValues()) {}

BitcoinExchange	&BitcoinExchange::operator=(const BitcoinExchange &cpy) {
	if (this == &cpy)
		return (*this);
	return (*this);
}
