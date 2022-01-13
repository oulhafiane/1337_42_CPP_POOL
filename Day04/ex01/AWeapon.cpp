/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:03:18 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 10:40:21 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(void)
{
	return ;
}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _apcost(apcost), _damage(damage)
{
	return ;
}

AWeapon::AWeapon(AWeapon const & weapon)
{
	*this = weapon;

	return ;
}

AWeapon::~AWeapon(void)
{
	return ;
}

AWeapon &						AWeapon::operator=(AWeapon const & weapon)
{
	this->_name = weapon._name;
	this->_apcost = weapon._apcost;
	this->_damage = weapon._damage;

	return (*this);
}

std::string const &				AWeapon::getName(void) const
{
	return (this->_name);
}

int								AWeapon::getAPCost(void) const
{
	return (this->_apcost);
}

int								AWeapon::getDamage(void) const
{
	return (this->_damage);
}
