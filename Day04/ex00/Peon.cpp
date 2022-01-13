/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:23:57 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 14:33:47 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Peon.hpp"

Peon::Peon(void)
{
	return ;
}

Peon::Peon(std::string name) : Victim(name)
{
	std::cout << "Zog zog." << std::endl;
	
	return ;
}

Peon::Peon(Peon const & peon)
{
	*this = peon;

	return ;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;

	return ;
}

Peon &					Peon::operator=(Peon const & peon)
{
	this->_name = peon._name;

	return (*this);
}

void					Peon::getPolymorphed(void) const
{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
