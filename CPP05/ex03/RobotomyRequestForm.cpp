/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 17:49:51 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:58:00 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > _gradeExec)
		throw Bureaucrat::GradeTooLowException();
	else if (!isSigned())
		throw AForm::FormNotSignedException();
	int	i = rand();
	if (i % 2 == 0)
		std::cout << _target << " robotomy was a success, " << _target << " is alive and way more productive!" << std::endl;
	else
		std::cout << _target << " robotomy was a failure, " << _target << " is now dead..." << std::endl;
	std::cout << executor.getName() << " executed " << _name << "." << std::endl;
}
