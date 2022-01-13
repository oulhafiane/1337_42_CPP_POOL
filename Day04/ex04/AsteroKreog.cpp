/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:25:06 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:17:04 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AsteroKreog.hpp"

Comet::Comet(void)
{
	return;
}

Comet::Comet(Comet const & comet)
{
	*this = comet;

	return ;
}

Comet::~Comet(void)
{
	return ;
}

Comet &							Comet::operator=(Comet const & comet)
{
	(void)comet;
	
	return (*this);
}

std::string						Comet::getName(void) const
{
	return "Comet";
}

std::string						Comet::beMined(DeepCoreMiner const & miner) const
{
	(void)miner;
	return "Meium";
}

std::string						Comet::beMined(StripMiner const & miner) const
{
	(void)miner;
	return "Tartarite";
}
