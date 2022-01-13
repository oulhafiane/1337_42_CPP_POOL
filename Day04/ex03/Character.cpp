/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:53:40 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 20:43:46 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) : _materias(new AMateria*[4])
{
	int		i;

	for (i=0;i<4;i++) {
		this->_materias[i] = NULL;
	}
	return ;
}

Character::Character(std::string const & name) : _name(name), _materias(new AMateria*[4])
{
	int		i;

	for (i=0;i<4;i++) {
		this->_materias[i] = NULL;
	}
	return ;
}

Character::Character(Character const & ch) : _materias(new AMateria*[4])
{
	*this = ch;

	return ;
}

Character::~Character(void)
{
	int		i;

	if (this->_materias != NULL) {
		for (i=0;i<4;i++) {
			if (this->_materias[i] != NULL)
				delete this->_materias[i];
		}
		delete [] this->_materias;
	}
	return ;
}

Character &						Character::operator=(Character const & ch)
{
	int		i;

	this->_name = ch._name;
	for (i=0;i<4;i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		if (ch._materias[i] != NULL)
			this->_materias[i] = ch._materias[i]->clone(); 
		else
			this->_materias[i] = NULL;
	}
	return (*this);
}

std::string const &				Character::getName(void) const
{
	return (this->_name);
}

void							Character::equip(AMateria * m)
{
	int		i = 0;

	if (m == NULL)
		return ;
	while (i < 4 && this->_materias[i] != NULL) {
		i++;
	}
	if (i >= 4)
		return ;
	this->_materias[i] = m;
}

void							Character::unequip(int idx)
{
	int		i;

	if (idx < 0 || idx >= 4)
		return ;
	for (i=idx;i<3;i++) {
		this->_materias[i] = this->_materias[i + 1];	
	}
	this->_materias[3] = NULL;
}

void							Character::use(int idx, ICharacter & target)
{
	if (idx < 0 || idx >= 4)
		return ;
	if (this->_materias[idx] != NULL)
		this->_materias[idx]->use(target);	
}
