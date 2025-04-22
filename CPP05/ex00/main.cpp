/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 13:11:28 by enorie            #+#    #+#             */
/*   Updated: 2024/10/02 15:46:31 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat Paul("Paul", 50);
	Bureaucrat Paul1(Paul);
	Bureaucrat Paul2 = Paul;
	std::cout << Paul << std::endl;
	std::cout << Paul1 << std::endl;
	std::cout << Paul2 << std::endl;
	std::cout << "Test Normal" << std::endl;
	try
	{
		Bureaucrat	Paul("Paul", 42);
		std::cout << Paul << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Exception Low" << std::endl;
	try
	{
		Bureaucrat	Paul("Paul", 8465);
		std::cout << Paul << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Exception High" << std::endl;
	try
	{
		Bureaucrat	Paul("Paul", -84);
		std::cout << Paul << std::endl;
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Exception High increment" << std::endl;
	try
	{
		Bureaucrat	Paul("Paul", 1);
		std::cout << Paul << std::endl;
		Paul.increment();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
	std::cout << std::endl;

	std::cout << "Test Exception Low decrement" << std::endl;
	try
	{
		Bureaucrat	Paul("Paul", 150);
		std::cout << Paul << std::endl;
		Paul.decrement();
	}
	catch (Bureaucrat::GradeTooHighException &e) {
		std::cout << e.what() << std::endl; }
	catch (Bureaucrat::GradeTooLowException &e) {
		std::cout << e.what() << std::endl; }
}
