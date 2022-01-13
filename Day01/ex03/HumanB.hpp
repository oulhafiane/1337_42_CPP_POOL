/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:57:38 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/18 15:19:22 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_B_H
# define HUMAN_B_H

#include <string>
#include "Weapon.hpp"

class HumanB
{
	private:
		std::string		_name;
		Weapon*			_weapon;

	public:
		HumanB(std::string name);
		~HumanB(void);

		std::string		getName(void);
		void			setName(std::string name);
		Weapon const *	getWeapon(void);
		void			setWeapon(Weapon& weapon);
		void			attack(void);
};

#endif
