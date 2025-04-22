/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 15:48:40 by enorie            #+#    #+#             */
/*   Updated: 2024/07/05 15:20:14 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>

class Contact {

public:
	Contact( void );
	~Contact( void );
	std::string	getFirstName( void );
	std::string	getLastName( void );
	std::string	getNickname( void );
	std::string	getNumber( void );
	std::string	getDarkestSecret( void );
	void		setFirstName( std::string str );
	void		setLastName( std::string str );
	void		setNickname( std::string str );
	void		setNumber( std::string str );
	void		setDarkestSecret( std::string str );

	private:
		std::string _first_name;
		std::string _last_name;
		std::string _nickname;
		std::string _number;
		std::string _darkest_secret;
};

#endif
