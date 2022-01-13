/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/15 15:55:39 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/18 15:19:25 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

std::string		HumanA::getName(void)
{
	return this->_name;
}

void			HumanA::setName(std::string name)
{
	this->_name = name;
}

Weapon const &	HumanA::getWeapon(void)
{
	return this->_weapon;
}

void			HumanA::attack(void)
{
	std::cout << this->_name <<" attacks with his " << this->_weapon.getType() << std::endl;
}
