/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:49:56 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:58:20 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <fstream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class ShrubberyCreationForm	: public AForm {
	public:
		ShrubberyCreationForm(std::string target);
		~ShrubberyCreationForm();

		void	execute(Bureaucrat const & executor) const;
};
