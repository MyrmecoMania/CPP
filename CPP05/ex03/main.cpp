/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:11:28 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:59:24 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern Paul;
	Bureaucrat Boss("Boss", 1);
	AForm *Home;
	AForm *Pardon;
	AForm *Robotomy;
	Home = Paul.makeForm("ShrubberyCreationForm", "Home");
	Pardon = Paul.makeForm("PresidentialPardonForm", "Boss");
	Boss.signForm(*Home);
	Pardon->beSigned(Boss);
	Boss.executeForm(*Pardon);
	Home->execute(Boss);
	Paul.makeForm("BuySandwich", "Boss");
	Robotomy = Paul.makeForm("RobotomyRequestForm", "Paul");
	Boss.signForm(*Robotomy);
	Boss.executeForm(*Robotomy);
	delete Home;
	delete Pardon;
	delete Robotomy;
}
