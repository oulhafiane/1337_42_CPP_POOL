/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:28:52 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:17:26 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "KoalaSteroid.hpp"

Asteroid::Asteroid(void)
{
	return ;
}

Asteroid::Asteroid(Asteroid const & astero)
{
	*this = astero;

	return ;
}

Asteroid::~Asteroid(void)
{
	return ;
}

Asteroid &						Asteroid::operator=(Asteroid const & astero)
{
	(void)astero;

	return (*this);
}

std::string						Asteroid::getName(void) const
{
	return "Asteroid";
}

std::string						Asteroid::beMined(DeepCoreMiner const & miner) const
{
	(void)miner;
	return "Dragonite";
}

std::string						Asteroid::beMined(StripMiner const & miner) const
{
	(void)miner;
	return "Flavium";
}
