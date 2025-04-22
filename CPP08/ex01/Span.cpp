/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:57:15 by enorie            #+#    #+#             */
/*   Updated: 2024/10/28 17:16:56 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : _max(N) {}

Span::~Span() {}

Span::Span(const Span &cpy) : _span(cpy.getSpan()), _max(cpy.getMax())
{}

Span	&Span::operator=(const Span &cpy) {
	if (this == &cpy)
		return (*this);
	return (*this);
}

unsigned int	Span::getMax() const {
	return (_max);
}

std::vector<int>	Span::getSpan() const {
	return (_span);
}

void	Span::addNumber(int i) {
	if (_span.size() == _max)
		throw SpanFullException();
	_span.push_back(i);
}

void	Span::addRange(std::vector<int>::iterator first, std::vector<int>::iterator last) {
	if ((long unsigned int)std::distance(first, last) > (_max - _span.size()))
		throw SpanFullException();
	_span.insert(_span.end(), first, last);
}

unsigned int	Span::shortestSpan() {
	if (_span.size() < 2)
		throw CantGetSpanException();
	std::sort(_span.begin(), _span.end());
	int	answer = _span.at(1) - _span.at(0);
	for (std::vector<int>::iterator it = _span.begin(); (it + 1) != _span.end(); it++) {
		if (*(it + 1) - *it < answer) {
			answer = *(it + 1) - *it;
		}
	}
	return (answer);
}

unsigned int	Span::longestSpan() {
	if (_span.size() < 2)
		throw CantGetSpanException();
	std::sort(_span.begin(), _span.end());
	return (_span.back() - _span.front());
}



const char *Span::SpanFullException::what() const throw() {
	return ("Can't add another number to the Span: Span is full!");
}

const char *Span::CantGetSpanException::what() const throw() {
	return ("Can't get span on this Span: Not enough numbers");
}
