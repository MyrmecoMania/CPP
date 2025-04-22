/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:11:28 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:55:59 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main()
{
	Bureaucrat Paul("Paul", 50);
	Bureaucrat Boss("Boss", 1);
	PresidentialPardonForm Pardon("Paul");
	PresidentialPardonForm Pardon1(Pardon);
	PresidentialPardonForm Pardon2 = Pardon;
	std::cout << Pardon << std::endl;
	std::cout << Pardon1 << std::endl;
	std::cout << Pardon2 << std::endl;
	std::cout << "Test Normal" << std::endl;
	try
	{
		ShrubberyCreationForm Home("Home");
		std::cout << Home << std::endl;
		Paul.signForm(Home);
		std::cout << Home << std::endl;
		Paul.executeForm(Home);
		RobotomyRequestForm Robotomy("Paul");
		std::cout << Robotomy << std::endl;
		Paul.signForm(Robotomy);
		std::cout << Robotomy << std::endl;
		Paul.executeForm(Robotomy);
	}
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Form not signed" << std::endl;
	try
	{
		ShrubberyCreationForm Home("Home");
		std::cout << Home << std::endl;
		Paul.executeForm(Home);
	}
	catch (AForm::FormNotSignedException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test all Form" << std::endl;
	try
	{
		ShrubberyCreationForm Home("Home");
		PresidentialPardonForm Pardon("Paul");
		RobotomyRequestForm	 Robotomy("Paul");
		std::cout << Home << std::endl;
		Boss.signForm(Home);
		std::cout << Home << std::endl;
		std::cout << Pardon << std::endl;
		Pardon.beSigned(Boss);
		std::cout << Pardon << std::endl;
		std::cout << Robotomy << std::endl;
		Boss.signForm(Robotomy);
		std::cout << Robotomy << std::endl;
		Home.execute(Boss);
		for (int j = 0; j < 10; j++)
			Boss.executeForm(Robotomy);
		Boss.executeForm(Pardon);
	}
	catch (AForm::FormNotSignedException &e) {
		std::cout << e.what() << std::endl; }
}
