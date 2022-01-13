/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:22:08 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 10:43:49 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	private:
		std::string				_name;
		int						_ap;
		AWeapon *				_weapon;

		Character(void);

	public:
		Character(std::string const & name);
		Character(Character const & character);
		virtual ~Character(void);

		Character &				operator=(Character const & character);
		void					recoverAP(void);
		void					equip(AWeapon * weapon);
		void					attack(Enemy * enemy);
		std::string const &		getName(void) const;
		int						getAP(void) const;
		AWeapon const *			getWeapon(void) const;
};

std::ostream &					operator<<(std::ostream & o, Character const & character);

#endif
