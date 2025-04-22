/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 16:59:24 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:08:55 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iomanip>
# include <iostream>

class Weapon {

	public:
		Weapon ( void );
		Weapon ( std::string type );
		~Weapon( void );
		const std::string&	getType( void );
		void				setType ( std::string type );

	private:
		std::string	_type;

};

#endif
