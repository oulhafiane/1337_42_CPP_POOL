/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:25:07 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 18:54:45 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	return ;
}

Ice::Ice(Ice const & ice)
{
	*this = ice;

	return ;
}

Ice::~Ice(void)
{
	return ;
}

Ice &							Ice::operator=(Ice const & ice)
{
	this->_type = ice._type;
	this->_xp = ice._xp;

	return (*this);
}

AMateria *						Ice::clone(void) const
{
	return (new Ice(*this));
}

void							Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->AMateria::use(target);
}
