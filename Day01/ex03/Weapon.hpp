/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:54:01 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/15 16:16:37 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <string>

class	Weapon
{
	private:
		std::string			_type;

	public:
		Weapon(std::string type);
		~Weapon(void);

		std::string const &	getType(void);
		void				setType(std::string type);
};

#endif
