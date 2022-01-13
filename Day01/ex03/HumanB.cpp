/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:57:27 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/18 15:19:24 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

std::string		HumanB::getName(void)
{
	return this->_name;
}

void			HumanB::setName(std::string name)
{
	this->_name = name;
}

Weapon const *	HumanB::getWeapon(void)
{
	return this->_weapon;
}

void			HumanB::setWeapon(Weapon& weapon)
{
	this->_weapon = &weapon;
}

void			HumanB::attack(void)
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}
