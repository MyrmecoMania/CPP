/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:49:49 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:57:12 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Bureaucrat.hpp"
class Bureaucrat;

class PresidentialPardonForm : public AForm {
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();

		void			execute(Bureaucrat const & executor) const;
};
