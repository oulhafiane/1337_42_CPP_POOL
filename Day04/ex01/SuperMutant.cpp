/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:10:15 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 10:42:25 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!" << std::endl;

	return ;
}

SuperMutant::SuperMutant(SuperMutant const & mutant)
{
	*this = mutant;

	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh..." << std::endl;

	return ;
}

SuperMutant &					SuperMutant::operator=(SuperMutant const & mutant)
{
	this->_hp = mutant._hp;
	this->_type = mutant._type;

	return (*this);
}

void							SuperMutant::takeDamage(int damage)
{
	this->Enemy::takeDamage(damage - 3);
}
