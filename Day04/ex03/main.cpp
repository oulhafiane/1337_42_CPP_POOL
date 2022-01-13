/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 18:14:07 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 09:02:57 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int		main(void)
{
	IMateriaSource	*src = new MateriaSource();
	AMateria		*cure = new Cure();
	ICharacter		*me = new Character("me");
	AMateria		*tmp;
	AMateria		*tmp2;
	ICharacter		*bob = new Character("bob");
	Ice				ice2;
	Cure			cure2;
	AMateria		*cure3;
	Cure			cure4;

	std::cout << "XP of " << cure->getType() << " : " << cure->getXP() << std::endl;
	cure->use(*bob);
	std::cout << "XP of " << cure->getType() << " : " << cure->getXP() << std::endl;
	cure3 = cure->clone();
	std::cout << "XP of " << cure3->getType() << " : " << cure3->getXP() << std::endl;
	cure4.use(*bob);
	cure2 = cure4;
	std::cout << "XP of " << cure2.getType() << " : " << cure2.getXP() << std::endl;
	src->learnMateria(cure);
	delete cure;
	tmp = src->createMateria("cure");
	std::cout << "XP of " << tmp->getType() << " : " << tmp->getXP() << std::endl;
	me->equip(tmp);
	src->learnMateria(&cure2);
	src->learnMateria(&cure2);
	src->learnMateria(cure3);
	src->learnMateria(&ice2);
	tmp = src->createMateria("ice");
	if (tmp == NULL)
		std::cout << "ice materia not created because not learned it" << std::endl;
	me->equip(tmp);
	std::cout << "=============================" << std::endl;
	tmp2 = src->createMateria("cure");
	me->equip(tmp2);
	me->equip(ice2.clone());
	me->equip(cure2.clone());
	me->equip(cure3);
	me->equip(tmp);
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);
	me->use(4, *bob);
	me->use(-1, *bob);
	me->use(100, *bob);
	std::cout << "=====Character Inventory=====" << std::endl;
	for (int i=0;i<4;i++) {
		me->use(i, *me);
	}
	std::cout << "=============================" << std::endl;
	std::cout << "XP of " << cure->getType() << " : " << cure->getXP() << std::endl;
	cure->use(*bob);
	std::cout << "XP of " << cure->getType() << " : " << cure->getXP() << std::endl;
	cure->use(*bob);
	std::cout << "XP of " << cure->getType() << " : " << cure->getXP() << std::endl;
	delete cure3;
	delete bob;
	delete me;
	delete src;
	return (0);
}

