/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:28:40 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 16:15:19 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	std::cout << "========" << std::endl;
	Victim *victim = new Victim("victim");
	Victim *peon = new Peon("peon");
	std::cout << "========" << std::endl;
	Peon ok("peon_ok");
	Peon peon_copy(ok);
	std::cout << "Peon name : " << peon_copy.getName() << std::endl;
	Sorcerer *s1 = new Sorcerer("s1", "S1");
	std::cout << "Sorcery name : " << s1->getName() << std::endl;
	std::cout << "Sorcery title : " << s1->getTitle() << std::endl;
	s1->polymorph(*victim);
	s1->polymorph(*peon);
	s1->polymorph(peon_copy);
	std::cout << "========" << std::endl;
	delete victim;
	delete peon;
	delete s1;
	
	return 0;
}
