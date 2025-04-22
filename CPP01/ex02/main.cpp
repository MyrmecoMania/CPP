/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:37:48 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:07:08 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>


int	main( void )
{
std::string		brain = "HI THIS IS BRAIN";
std::string		*brainAddress = &brain;
std::string		&brainReference = brain;

std::cout << "address of brain = " << &brain << std::endl;
std::cout << "brainAddress = " << brainAddress << std::endl;
std::cout << "brainReference = " << &brainReference << std::endl;

std::cout << "brain = " << brain << std::endl;
std::cout << "brainAddress points to = " << *brainAddress << std::endl;
std::cout << "brainReference refers to = " << brainReference << std::endl;
}
