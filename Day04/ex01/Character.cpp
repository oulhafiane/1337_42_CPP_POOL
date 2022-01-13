/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:53:32 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 12:03:58 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Character.hpp"

Character::Character(void) : _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(std::string const & name) : _name(name), _ap(40), _weapon(NULL)
{
	return ;
}

Character::Character(Character const & character)
{
	*this = character;

	return ;
}

Character::~Character(void)
{
	return ;
}

Character &						Character::operator=(Character const & character)
{
	this->_name = character._name;
	this->_ap = character._ap;
	this->_weapon = character._weapon;

	return (*this);
}

void							Character::recoverAP(void)
{
	if (this->_ap + 10 >= 40)
		this->_ap = 40;
	else
		this->_ap += 10;
}

void							Character::equip(AWeapon * weapon)
{
	this->_weapon = weapon;
}

void							Character::attack(Enemy * enemy)
{
	if (this->_weapon == NULL || enemy == NULL || this->_ap <= 0 || (this->_ap - this->_weapon->getAPCost() < 0))
		return ;
	std::cout << this->_name << " attacks " << enemy->getType() << " with a " << this->_weapon->getName() << std::endl; 
	this->_weapon->attack();
	this->_ap -= this->_weapon->getAPCost();
	enemy->takeDamage(this->_weapon->getDamage());
	if (enemy->getHP() <= 0)
		delete enemy;
}

std::string const &				Character::getName(void) const
{
	return (this->_name);
}

int								Character::getAP(void) const
{
	return (this->_ap);
}

AWeapon const *					Character::getWeapon(void) const
{
	return (this->_weapon);
}

std::ostream &					operator<<(std::ostream & o, Character const & ch)
{
	o << ch.getName() << " has " << ch.getAP() << " AP and ";
	if (ch.getWeapon() != NULL)
		o << "wields a " << ch.getWeapon()->getName();
	else
		o << "is unarmed";
	o << std::endl;

	return (o);
}
