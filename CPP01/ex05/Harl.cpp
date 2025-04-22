/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:50:59 by enorie            #+#    #+#             */
/*   Updated: 2024/07/06 15:12:50 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void )
{
	functions[0].level = "DEBUG";
	functions[1].level = "INFO";
	functions[2].level = "WARNING";
	functions[3].level = "ERROR";
	functions[0].f = &Harl::debug;
	functions[1].f = &Harl::info;
	functions[2].f = &Harl::warning;
	functions[3].f = &Harl::error;
	
};

Harl::~Harl( void ) {};

void	Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I really do !" << std::endl;
};

void	Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money." << std::endl;
	std::cout << "You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
};

void	Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
};

void	Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
};

void	Harl::complain( std::string level )
{
	int	i = 0;
	while (i < 4 && functions[i].level != level)
		i++;
	if (functions[i].level == level)
		(this->*functions[i].f)();
};