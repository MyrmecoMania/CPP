/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Inter.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/19 13:50:58 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 16:00:02 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {}

Intern::~Intern() {}

Intern::Intern(const Intern &cpy)
{
	*this = cpy;
}

Intern	&Intern::operator=(const Intern &cpy)
{
	if (this == &cpy)
		return (*this);
	return (*this);
}

AForm	*createRobotomy(const std::string target)
{
	return new RobotomyRequestForm(target);
}

AForm	*createPardon(const std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm	*createShrubbery(const std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm	*Intern::makeForm(const std::string name, const std::string target)
{
	AForm *(*functions[])(const std::string target) = {&createRobotomy, &createPardon, &createShrubbery};
	std::string forms[] = {"RobotomyRequestForm", "PresidentialPardonForm", "ShrubberyCreationForm"};
	for(int i = 0; i < 3; i++)
	{
		if (name == forms[i])
		{
			std::cout << "One useless goblin created a " << name << "." << std::endl;
			return functions[i](target);
		}
	}
	std::cout << "I don't know what you're talking about, please don't robotomise me! :(" << std::endl;
	return (NULL);
}
