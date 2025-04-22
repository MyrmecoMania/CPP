/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 17:06:19 by enorie            #+#    #+#             */
/*   Updated: 2024/07/09 17:08:12 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A
# define HUMAN_A

# include "Weapon.hpp"

class HumanA {
	public:
		HumanA( std::string name,  Weapon& weapon );
		~HumanA( void );
		void	attack( void );
	private:
		HumanA( void );
		std::string	_name;
		Weapon&		_weapon;
};

#endif
