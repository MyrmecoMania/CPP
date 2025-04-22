/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 16:14:35 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 19:02:40 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{	
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &cpy);
		MateriaSource &operator=(const MateriaSource &cpy);
		~MateriaSource();
		void		learnMateria(AMateria*);
		AMateria*	createMateria(std::string const & type);
		int			getIndex() const;
	private:
		AMateria*	inventory[4];
		int			_index;
};