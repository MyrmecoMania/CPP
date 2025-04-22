/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:06:23 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:08:27 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB {
	public:
		HumanB( std::string name );
		HumanB( std::string name, Weapon weapon );
		~HumanB( void );
		void	attack( void );
		void	setWeapon ( Weapon& weapon );
	private:
		HumanB( void );
		std::string	_name;
		Weapon*		_weapon;
};

#endif
