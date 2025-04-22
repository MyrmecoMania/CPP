/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/12 15:36:27 by enorie            #+#    #+#             */
/*   Updated: 2024/07/12 19:01:49 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter {
	public:
		Character();
		Character(std::string name);
		Character &operator=(const Character &cpy);
		Character(const Character &cpy);
		~Character();
		std::string const & getName() const;
		void	equip(AMateria* m);
		void	unequip(int idx);
		void	use(int idx, ICharacter& target);
		int		getIndex() const;
	private:
		std::string	_name;
		AMateria*	inventory[4];
		int			_index;
};