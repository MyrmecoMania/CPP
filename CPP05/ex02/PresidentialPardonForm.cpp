/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:49:45 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:57:24 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForn", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExec)
		throw Bureaucrat::GradeTooLowException();
	else if (!isSigned())
		throw AForm::FormNotSignedException();
	std::cout << _target << " was pardoned by Zaphod Beeblebrox." << std::endl;
	std::cout << executor.getName() << " executed " << _name << "." << std::endl;
}
