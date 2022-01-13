/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:23:04 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 14:36:25 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Victim.hpp"

Victim::Victim(void)
{
	return ;
}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;

	return ;
}

Victim::Victim(Victim const & victim)
{
	*this = victim;

	return ;
}

Victim::~Victim(void)
{
	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;

	return ;
}

Victim &				Victim::operator=(Victim const & victim)
{
	this->_name = victim._name;

	return (*this);
}

std::string const &		Victim::getName(void) const
{
	return (this->_name);
}

void					Victim::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &			operator<<(std::ostream & o, Victim const & victim)
{
	o << "I'm " << victim.getName() << " and I like otters!" << std::endl;

	return (o);
}
