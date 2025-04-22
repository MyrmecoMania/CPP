/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 17:51:27 by enorie            #+#    #+#             */
/*   Updated: 2024/11/08 11:27:52 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <stdlib.h>

class RPN {
	public:
		RPN(std::string equation);
		~RPN();
		RPN(const RPN &cpy);
		RPN &operator=(const RPN &cpy);
		std::stack<int>	getRpn() const;
	private:
		RPN();
		std::stack<int>	_rpn;
};
