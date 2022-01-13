/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 19:58:17 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 10:34:16 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <string>

class AWeapon
{
	protected:
		std::string				_name;
		int						_apcost;
		int						_damage;

		AWeapon(void);
		
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		AWeapon(AWeapon const & weapon);
		virtual ~AWeapon(void);

		AWeapon &				operator=(AWeapon const & weapon);
		std::string const &		getName(void) const;
		int						getAPCost(void) const;
		int						getDamage(void) const;
		virtual void			attack(void) const = 0;

};

#endif

