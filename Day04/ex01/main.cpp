/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 10:31:11 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 12:05:13 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

static void		printStatus(Character *me, Enemy *b, Enemy *c)
{
	std::cout << "===============" << std::endl;
	std::cout << *me;
	if (b != NULL)
		std::cout << "Enemy " << b->getType() << " has " << b->getHP() << "HP." << std::endl;
	if (c != NULL)
		std::cout << "Enemy " << c->getType() << " has " << c->getHP() << "HP." << std::endl;
	std::cout << "===============" << std::endl;
}

int		main(void)
{
	Character* me = new Character("zoulhafi");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	printStatus(me, b, c);
	me->attack(b);
	printStatus(me, b, c);
	me->equip(pf);
	printStatus(me, b, c);
	me->attack(c);
	printStatus(me, b, c);
	me->equip(NULL);
	me->attack(NULL);
	me->attack(b);
	std::cout << "Nothing shoud happen here." << std::endl;
	printStatus(me, b, c);
	me->equip(pf);
	me->attack(b);
	me->attack(c);
	printStatus(me, b, c);
	me->attack(b);
	me->attack(c);
	printStatus(me, NULL, c);
	std::cout << "No AP must recover." << std::endl;
	me->recoverAP();
	printStatus(me, NULL, c);
	me->recoverAP();
	printStatus(me, NULL, c);
	me->attack(c);
	printStatus(me, NULL, c);
	me->attack(c);
	return (0);
}
