/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:30:32 by enorie            #+#    #+#             */
/*   Updated: 2024/07/05 16:15:05 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int	main()
{
	Phonebook 	MyAwesomePhonebook;
	std::string	buf;

	while (buf != "EXIT")
	{
		if (std::cin.eof())
			break;
		std::cout << "|     WELCOME TO YOUR AWESOME PHONEBOOK!     |" << std::endl;
		std::getline(std::cin, buf);
		if (buf == "ADD")
			MyAwesomePhonebook.add();
		else if (buf == "SEARCH")
			MyAwesomePhonebook.search();
	}
}
