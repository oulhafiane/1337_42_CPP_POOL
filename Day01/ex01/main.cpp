/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 14:44:22 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/15 15:19:46 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie*	zombies = NULL;
	int		i;
	int		n;

	n = 42;
	zombies = zombieHorde(n, "Zombie");
	for (i=0;i<n;i++) {
		zombies[i].announce();
	}
	delete [] zombies;
	return (0);
}
