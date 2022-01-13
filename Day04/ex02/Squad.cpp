/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:53:50 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 11:21:47 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Squad.hpp"

Squad::Squad(void) : _count(0), _units(NULL)
{
	return ;
}

Squad::Squad(Squad const & squad) : _count(0), _units(NULL)
{
	*this = squad;

	return ;
}

Squad::~Squad(void)
{
	int		i;

	for (i=0;i<this->_count;i++) {
		delete this->_units[i];
	}
	if (this->_units != NULL)
		delete this->_units;
}

Squad &							Squad::operator=(Squad const & squad)
{
	int		i;

	for (i=0;i<this->_count;i++) {
		delete this->_units[i];
	}
	if (this->_units != NULL)
		delete this->_units;
	this->_count = squad._count;
	if (squad._units == NULL)
		return (*this);
	this->_units = new ISpaceMarine*[this->_count];
	for (i=0;i<this->_count;i++) {
		this->_units[i] = squad._units[i]->clone();
	}
	return (*this);
}

int								Squad::getCount(void) const
{
	return (this->_count);
}

ISpaceMarine *					Squad::getUnit(int i) const
{
	if (this->_units == NULL || i >= this->_count || i < 0)
		return (NULL);
	return (this->_units[i]);
}

int								Squad::push(ISpaceMarine * unit)
{
	int				i;
	ISpaceMarine	**newUnits;

	if (unit == NULL)
		return (this->_count);
	for(i=0;i<this->_count;i++) {
		if (this->_units[i] == unit)
			return (this->_count);
	}
	newUnits = new ISpaceMarine*[++this->_count];
	for (int i=0;i<this->_count - 1;i++) {
		newUnits[i] = this->_units[i];
	}
	if (this->_units != NULL)
		delete this->_units;
	this->_units = newUnits;
	this->_units[this->_count - 1] = unit;
	return (this->_count);
}
