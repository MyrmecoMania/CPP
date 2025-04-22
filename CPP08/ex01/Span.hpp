/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 11:57:13 by enorie            #+#    #+#             */
/*   Updated: 2024/10/28 16:41:32 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span {
	private:
		Span();
		std::vector<int>	_span;
		unsigned int	_max;

	public:
		Span(unsigned int N);
		~Span();
		Span(const Span &cpy);
		Span	&operator=(const Span &cpy);

		void			addNumber(int i);
		void			addRange(std::vector<int>::iterator first, std::vector<int>::iterator last);
		unsigned int	shortestSpan();
		unsigned int	longestSpan();
		unsigned int	getMax() const;
		std::vector<int>	getSpan() const;

    class SpanFullException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};

	class CantGetSpanException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};
