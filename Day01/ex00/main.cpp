/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 09:26:36 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/15 14:23:22 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int		main(void)
{
	Zombie*		zombie1 = NULL;

	zombie1 = newZombie("Zambie 1");
	zombie1->announce();
	randomChump("Zombie 2");
	delete zombie1;
	return (0);
}
