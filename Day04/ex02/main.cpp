/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 15:58:40 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 11:57:34 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int			main(void)
{
	int					i;
	Squad				*squad = new Squad;
	Squad				*squad2 = new Squad;
	ISpaceMarine		*tmp;
	ISpaceMarine		*unit1 = new TacticalMarine;
	AssaultTerminator	*unit2 = new AssaultTerminator;
	ISpaceMarine		*unit3 = new AssaultTerminator(*unit2);
	
	squad->push(unit3);
	squad->push(unit1);
	std::cout << "=====Squad Count : " << squad->getCount() << " =====" << std::endl;
	squad->push(unit1);
	std::cout << "=====Squad Count : " << squad->getCount() << " =====" << std::endl;
	squad->push(unit3);
	squad->push(unit1);
	std::cout << "=====Squad Count : " << squad->getCount() << " =====" << std::endl;
	squad->push(NULL);
	squad->push(NULL);
	std::cout << "=====Squad Count : " << squad->getCount() << " =====" << std::endl;
	squad->push(unit2);
	std::cout << "=====Squad Count : " << squad->getCount() << " =====" << std::endl;
	for(i = 0; i < 2 ; i++) {
		squad->push(new TacticalMarine());
	}
	std::cout << "=====Squad Count : " << squad->getCount() << std::endl;
	tmp = squad->getUnit(-1);
	if (tmp != NULL)
		tmp->battleCry();
	tmp = squad->getUnit(100);
	if (tmp != NULL)
		tmp->battleCry();
	for(i = 0; i < squad->getCount() ; i++) {
		tmp = squad->getUnit(i);
		if (tmp != NULL) {
			tmp->battleCry();
			tmp->rangedAttack();
			tmp->meleeAttack();
		}
	}
	std::cout << "=====assignation here=====" << std::endl;
	*squad2 = *squad;
	for(i = 0; i < squad2->getCount() ; i++) {
		tmp = squad2->getUnit(i);
		if (tmp != NULL) {
			tmp->battleCry();
			tmp->rangedAttack();
			tmp->meleeAttack();
		}
	}
	squad2->push(unit1->clone());
	Squad squad3(*squad2);
	squad3.push(unit1->clone());
	delete squad;
	std::cout << "=====squad1 deleted, now squad 2=====" << std::endl;
	delete squad2;
	std::cout << "=====squad3 created with copy constructor=====" << std::endl;
	for(i = 0; i < squad3.getCount() ; i++) {
		tmp = squad3.getUnit(i);
		if (tmp != NULL) {
			tmp->battleCry();
			tmp->rangedAttack();
			tmp->meleeAttack();
		}
	}
	std::cout << "=====now squad3 will be out of scope, so it will be deleted.=====" << std::endl;
	return (0);
}
