/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:29:01 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/15 15:19:17 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <string>

class	Zombie
{
	private:
		std::string		_name;

	public:
		Zombie(void);
		~Zombie(void);

		std::string		getName(void);
		void			setName(std::string name);
		void			announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
