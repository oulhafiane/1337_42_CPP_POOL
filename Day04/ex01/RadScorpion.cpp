/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:19:06 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 10:42:56 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;

	return ;
}

RadScorpion::RadScorpion(RadScorpion const & scorpion)
{
	*this = scorpion;

	return ;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl;

	return ;
}

RadScorpion &				RadScorpion::operator=(RadScorpion const & scorpion)
{
	this->_hp = scorpion._hp;
	this->_type = scorpion._type;

	return (*this);
}
