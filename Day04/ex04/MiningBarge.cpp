/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:34:09 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:19:31 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MiningBarge.hpp"

MiningBarge::MiningBarge(void) : _lasers(new IMiningLaser*[4])
{
	int		i;

	for (i=0;i<4;i++) {
		this->_lasers[i] = NULL;
	}
	return ;
}

MiningBarge::MiningBarge(MiningBarge const & barge) : _lasers(new IMiningLaser*[4])
{
	int		i;

	for (i=0;i<4;i++) {
		this->_lasers[i] = NULL;
	}
	*this = barge;
	return ;
}

MiningBarge::~MiningBarge(void)
{
	delete [] this->_lasers;
}

MiningBarge &					MiningBarge::operator=(MiningBarge const & barge)
{
	int		i;

	for (i=0;i<4;i++) {
		this->_lasers[i] = barge._lasers[i];
	}

	return (*this);
}

void							MiningBarge::equip(IMiningLaser * laser)
{
	int		i = 0;
	
	while (i < 4 && this->_lasers[i] != NULL)
		i++;
	if (i >= 4)
		return ;
	this->_lasers[i] = laser;
}

void							MiningBarge::mine(IAsteroid * astero) const
{
	int		i;

	for (i=0;i<4;i++) {
		if (this->_lasers[i] != NULL)
			this->_lasers[i]->mine(astero);
	}
}
