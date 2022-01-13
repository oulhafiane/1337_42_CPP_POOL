/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:09:20 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 14:55:15 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void)
{
	return ;
}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
	return ;
}

Sorcerer::Sorcerer(Sorcerer const & sorcerer)
{
	*this = sorcerer;

	return ;
}

Sorcerer::~Sorcerer(void)
{
	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
	return ;
}

Sorcerer&				Sorcerer::operator=(Sorcerer const & sorcerer)
{
	this->_name = sorcerer._name;
	this->_title = sorcerer._title;

	return (*this);
}

std::string const &		Sorcerer::getName(void) const
{
	return (this->_name);
}

std::string const &		Sorcerer::getTitle(void) const
{
	return (this->_title);
}

void					Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}

std::ostream&			operator<<(std::ostream &o, Sorcerer const & sorcerer)
{
	o << "I am " << sorcerer.getName() << ", " << sorcerer.getTitle() << ", and I like ponies!" << std::endl;

	return (o);
}
