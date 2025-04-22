/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:11:28 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:48:11 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Bureaucrat Paul("Paul", 50);
	Bureaucrat Paul1(Paul);
	Bureaucrat Paul2 = Paul1;
	std::cout << Paul << std::endl;
	std::cout << Paul1 << std::endl;
	std::cout << Paul2 << std::endl;
	std::cout << "Test Normal" << std::endl;
	try
	{
		Form f("High Form", 42, 42);
		Form f2(f);
		Form f3 = f;
		std::cout << f << std::endl;
		std::cout << f2 << std::endl;
		std::cout << f3 << std::endl;
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Exception Low" << std::endl;
	try
	{
		Form f("High Form", 845, 42);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Exception High" << std::endl;
	try
	{
		Form f("High Form", 84, -42);
		std::cout << f << std::endl;
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Sign normal" << std::endl;
	try
	{
		Form f("High Form", 50, 50);
		std::cout << f << std::endl;
		f.beSigned(Paul);
		std::cout << f << std::endl;
		Paul.signForm(f);
	}
	catch (Form::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Form::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;
}
