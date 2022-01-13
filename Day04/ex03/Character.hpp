/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:49:00 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 18:56:15 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string				_name;
		AMateria				**_materias;

		Character(void);

	public:
		Character(std::string const & name);
		Character(Character const & ch);
		virtual ~Character(void);

		Character &				operator=(Character const & ch);
		std::string const &		getName(void) const;	
		void					equip(AMateria * m);
		void					unequip(int idx);
		void					use(int idx, ICharacter & target);
};

#endif
