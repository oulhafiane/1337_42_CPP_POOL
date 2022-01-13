/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:34:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:16:09 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "StripMiner.hpp"

StripMiner::StripMiner(void)
{
	return ;
}

StripMiner::StripMiner(StripMiner const & miner)
{
	*this = miner;

	return ;
}

StripMiner::~StripMiner(void)
{
	return ;
}

StripMiner &						StripMiner::operator=(StripMiner const & miner)
{
	(void)miner;

	return (*this);
}

void								StripMiner::mine(IAsteroid * astero)
{
	std::cout << "* strip ming... got " << astero->beMined(*this) << "! *" << std::endl;
}
