/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:56:57 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/18 15:19:19 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_H
# define HUMAN_A_H

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		std::string		_name;
		Weapon&			_weapon;

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);

		std::string		getName(void);
		void			setName(std::string name);
		Weapon const &	getWeapon(void);
		void			attack(void);
};

#endif
