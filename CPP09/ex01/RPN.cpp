/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:54:19 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 10:49:38 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::RPN(std::string equation) {
	if (equation.size() == 0)
		throw std::runtime_error("Error: empty argument");
	std::size_t	pos = 1;
	while (pos != std::string::npos)
	{
		pos = equation.find(" ");
		if ((pos > 1 && pos != std::string::npos) || (pos == std::string::npos && equation.size() > 1))
			throw	std::runtime_error("Error: invalid number or operator: " + equation.substr(0, pos));
		if (isdigit(equation[0]))
			_rpn.push(atoi(equation.substr(0, pos).c_str()));
		else if (equation[0] == '+' || equation[0] == '-' || equation[0] == '/' || equation[0] == '*') {
			if (_rpn.size() < 2)
				throw	std::runtime_error("Error: two consecutives operators");
			int	temp = _rpn.top();
			_rpn.pop();
			if (equation[0] == '+')
				temp += _rpn.top();
			else if (equation[0] == '-')
				temp = _rpn.top() - temp;
			else if (equation[0] == '/')
				temp = _rpn.top() / temp;
			else if (equation[0] == '*')
				temp *= _rpn.top();
			_rpn.pop();
			_rpn.push(temp);
		}
		else
			throw	std::runtime_error("Error: invalid number or operator: " + equation);
		equation.erase(0, 2);
	}
  if (_rpn.size() > 1)
    throw	std::runtime_error("Error: wrong equation: no final operator");
  else
	  std::cout << _rpn.top() << std::endl;
}

RPN::~RPN() {}

RPN::RPN(const RPN &cpy) : _rpn(cpy.getRpn()) {}

RPN &RPN::operator=(const RPN &cpy) {
	if (this == &cpy)
		return (*this);
	return (*this);
}

std::stack<int> RPN::getRpn() const { return (_rpn); }
