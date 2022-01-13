/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:45:07 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/15 15:19:35 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <sstream>
#include "Zombie.hpp"

Zombie*		zombieHorde(int N, std::string name)
{
	Zombie*		horde = new Zombie[N];
	int					i;

	for (i=0;i<N;i++) {
		std::stringstream	stream;
		stream << name << (i + 1);
		horde[i].setName(stream.str());
	}
	return (horde);
}
