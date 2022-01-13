/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 08:43:30 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 09:05:05 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#include <string>

class Enemy
{
	protected:
		int						_hp;
		std::string				_type;
		
		Enemy(void);

	public:
		Enemy(int hp, std::string const & type);
		Enemy(Enemy const & enemy);
		virtual ~Enemy(void);

		Enemy &					operator=(Enemy const & enemy);
		int						getHP(void) const;
		std::string const &		getType(void) const;

		virtual void			takeDamage(int damage);
};

#endif
