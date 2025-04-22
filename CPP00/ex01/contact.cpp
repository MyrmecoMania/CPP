/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:48:52 by enorie            #+#    #+#             */
/*   Updated: 2024/07/05 15:20:07 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact( void ) {};
Contact::~Contact( void ) {};

std::string	Contact::getFirstName( void )
{
	return (_first_name);
}
std::string	Contact::getLastName( void )
{
	return (_last_name);
}
std::string	Contact::getNickname( void )
{	
	return (_nickname);
}
std::string	Contact::getNumber( void )
{
	return (_number);
}
std::string	Contact::getDarkestSecret( void )
{
	return (_darkest_secret);
}
void	Contact::setFirstName( std::string str )
{
	_first_name = str;
}
void	Contact::setLastName( std::string str )
{
	_last_name = str;
}
void	Contact::setNickname( std::string str )
{
	_nickname = str;
}
void	Contact::setNumber( std::string str )
{
	_number = str;
}
void	Contact::setDarkestSecret( std::string str )
{
	_darkest_secret = str;
}
