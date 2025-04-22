/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 17:50:56 by enorie            #+#    #+#             */
/*   Updated: 2024/04/29 18:36:05 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl
{
	private:
		struct _functions
		{
			std::string	level;
			void (Harl::*f)( void );
		};		
		struct	_functions	functions[4];
		void				debug( void );
		void				info( void );
		void				warning( void );
		void				error( void );
	public:
		Harl();
		~Harl();
		void	complain( std::string level );
};
#endif