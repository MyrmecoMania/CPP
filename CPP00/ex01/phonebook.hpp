/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:29:34 by enorie            #+#    #+#             */
/*   Updated: 2024/07/05 15:51:45 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

class Phonebook {

public:
	
	Phonebook( void );
	~Phonebook( void );
	void	add( void );
	void	search( void );

private: 
	Contact _contacts[8];
	int		_index;
};

#endif