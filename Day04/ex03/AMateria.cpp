/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:11:52 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 18:45:51 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _xp(0)
{
	return ;
}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0)
{
	return ;
}

AMateria::AMateria(AMateria const & materia)
{
	*this = materia;

	return ;
}

AMateria::~AMateria(void)
{
	return ;
}

AMateria &					AMateria::operator=(AMateria const & materia)
{
	this->_type = materia._type;
	this->_xp = materia._xp;

	return (*this);
}

std::string const &			AMateria::getType(void) const
{
	return (this->_type);
}

unsigned int				AMateria::getXP(void) const
{
	return (this->_xp);
}

void						AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}
