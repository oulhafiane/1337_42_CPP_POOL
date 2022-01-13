/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:31:41 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 11:25:16 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DeepCoreMiner.hpp"

DeepCoreMiner::DeepCoreMiner(void)
{
	return ;
}

DeepCoreMiner::DeepCoreMiner(DeepCoreMiner const & miner)
{
	*this = miner;

	return ;
}

DeepCoreMiner::~DeepCoreMiner(void)
{
	return ;
}

DeepCoreMiner &					DeepCoreMiner::operator=(DeepCoreMiner const & miner)
{
	(void)miner;

	return (*this);
}

void							DeepCoreMiner::mine(IAsteroid * astero)
{
	std::cout << "* mining deep... got " << astero->beMined(*this) << "! *" << std::endl;
}
