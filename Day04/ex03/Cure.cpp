/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:34:16 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 18:55:50 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	return ;
}

Cure::Cure(Cure const & cure)
{
	*this = cure;

	return ;
}

Cure::~Cure(void)
{
	return ;
}

Cure &							Cure::operator=(Cure const & cure)
{
	this->_type = cure._type;
	this->_xp = cure._xp;

	return (*this);
}

AMateria *							Cure::clone(void) const
{
	return (new Cure(*this));
}

void							Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	this->AMateria::use(target);
}
