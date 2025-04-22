/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:49:53 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:57:32 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class RobotomyRequestForm : public AForm {
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();

    	void	execute(Bureaucrat const & executor) const;
};
