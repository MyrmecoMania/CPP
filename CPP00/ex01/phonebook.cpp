/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:29:37 by enorie            #+#    #+#             */
/*   Updated: 2024/07/08 13:16:46 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"
#include <cctype>

static void	display(Contact contact)
{
	std::cout << "FIRST NAME: " << contact.getFirstName() << std::endl;
	std::cout << "LAST NAME: " << contact.getLastName() << std::endl;
	std::cout << "NICKNAME: " << contact.getNickname() << std::endl;
	std::cout << "PHONENUMBER: " << contact.getNumber() << std::endl;
	std::cout << "DARKEST SECRET: " << contact.getDarkestSecret() << std::endl;
}

static int	ft_check_printable(std::string str)
{
	if (str == "")
		return (1);
	for (size_t i = 0; str[i]; ++i)
	{
		if (!isprint(str[i]))
			return (1);
	}
	return (0);
}

static int ft_getFirstName( Contact *contact )
{
	std::string	buffer;

	std::cout << "NEW CONTACT FIRST NAME: ";
	std::getline(std::cin, buffer);
	if (ft_check_printable(buffer))
		return (1);
	contact->setFirstName(buffer);
	return (0);
}

static int ft_getLastName( Contact *contact )
{
	std::string	buffer;

	std::cout << "NEW CONTACT LAST NAME: ";
	std::getline(std::cin, buffer);
	if (ft_check_printable(buffer))
		return (1);
	contact->setLastName(buffer);
	return (0);
}

static int ft_getNickame( Contact *contact )
{
	std::string	buffer;

	std::cout << "NEW CONTACT NICKNAME: ";
	std::getline(std::cin, buffer);
	if (ft_check_printable(buffer))
		return (1);
	contact->setNickname(buffer);
	return (0);
}

static int ft_getNumber( Contact *contact )
{
	std::string	buffer;

std::cout << "NEW CONTACT PHONENUMBER: ";
	std::getline(std::cin, buffer);
	if (ft_check_printable(buffer))
		return (1);
	contact->setNumber(buffer);
	return (0);
}

static int ft_getSecret( Contact *contact )
{
	std::string	buffer;

	std::cout << "NEW CONTACT DARKEST SECRET: ";
	std::getline(std::cin, buffer);
	if (ft_check_printable(buffer))
		return (1);
	contact->setDarkestSecret(buffer);
	return (0);
}

Phonebook::Phonebook( void )
{
	_index = 0;
};

Phonebook::~Phonebook( void ) {};

std::string print( std::string str )
{
	if (str.size() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
};

void Phonebook::add( void )
{
	Contact 	newcontact;
	int			valid = 0;

	while (!valid)
	{
		while (!valid)
		{
			if (ft_getFirstName(&newcontact))
				break;
			if (std::cin.eof())
				return ;
			if (ft_getLastName(&newcontact))
				break;
			if (std::cin.eof())
				return ;
			if (ft_getNickame(&newcontact))
				break;
			if (std::cin.eof())
				return ;
			if (ft_getNumber(&newcontact))
				break;
			if (std::cin.eof())
				return ;
			if (ft_getSecret(&newcontact))
				break;
			if (std::cin.eof())
				return ;
			valid = 1;
		}
	}
	_contacts[_index] = newcontact;
	if (_index == 7)
		_index = 0;
	else
		++_index;
};

void Phonebook::search( void )
{
	std::string	buffer;

	for (int i = 0; i < 8; ++i) {
		std::cout << "|" << std::setw (10) << i + 1 << std::setfill (' ') << "|";
		std::cout << std::setw (10) << print(_contacts[i].getFirstName()) << std::setfill (' ') << "|";
		std::cout << std::setw (10) << print(_contacts[i].getLastName()) << std::setfill (' ') << "|";
		std::cout << std::setw (10) << print(_contacts[i].getNickname()) << std::setfill (' ') << "|" << std::endl;
	}
	std::cout << "CHOOSE A CONTACT TO DISPLAY: ";
	std::getline(std::cin, buffer);
	if (std::cin.eof())
		return ;
	for(int i = 0; i < 8; ++i)
	{
		if (buffer[0] == (i + 1 + '0'))
		{
			display(_contacts[i]);
			break;
		}
		else if (i == 7 && buffer[0] != (i + 1 + '0'))
			std::cout << "WRONG INDEX" << std::endl;
	}
};
