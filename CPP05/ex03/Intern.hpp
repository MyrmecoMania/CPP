/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:50:55 by enorie            #+#    #+#             */
/*   Updated: 2024/09/03 10:45:13 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "AForm.hpp"
class AForm;

class Intern {
	public:
		Intern();
		~Intern();
		Intern(const Intern &cpy);
		Intern &operator=(const Intern &cpy);
		AForm	*makeForm(std::string name, std::string target);
};
