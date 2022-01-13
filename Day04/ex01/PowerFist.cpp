/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 20:20:19 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 10:41:23 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "PowerFist.hpp"

PowerFist::PowerFist(void) : AWeapon("Power Fist", 8, 50)
{
	return ;
}

PowerFist::PowerFist(PowerFist const & fist)
{
	*this = fist;

	return ;
}

PowerFist::~PowerFist(void)
{
	return ;
}

PowerFist &						PowerFist::operator=(PowerFist const & fist)
{
	this->_name = fist._name;
	this->_apcost = fist._apcost;
	this->_damage = fist._damage;

	return (*this);
}

void							PowerFist::attack(void) const
{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
