/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:44:31 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:37:47 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "IAsteroid.hpp"
#include "IMiningLaser.hpp"
#include "AsteroKreog.hpp"
#include "KoalaSteroid.hpp"
#include "MiningBarge.hpp"
#include "StripMiner.hpp"
#include "DeepCoreMiner.hpp"

int		main(void)
{
	MiningBarge		barge;
	IMiningLaser	*laser1 = new DeepCoreMiner();
	IMiningLaser	*laser2 = new StripMiner();
	DeepCoreMiner	miner1;
	StripMiner		miner2;
	IAsteroid		*stero1 = new Comet();
	IAsteroid		*stero2 = new Asteroid();
	Comet			comet;
	Asteroid		astero;

	barge.equip(laser1);
	barge.equip(&miner1);
	MiningBarge		barge2(barge);
	barge2.equip(laser2);
	barge2.equip(&miner2);
	StripMiner miner3(miner2);
	barge2.equip(&miner3);
	std::cout << "======Comet=======" << std::endl;
	barge2.mine(stero1);
	std::cout << "======Astero======" << std::endl;
	barge2.mine(stero2);
	std::cout << "======Comet=======" << std::endl;
	barge2.mine(&comet);
	std::cout << "======Astero======" << std::endl;
	barge2.mine(&astero);
	std::cout << "===============" << std::endl;
	delete laser1;
	delete laser2;
	delete stero1;
	delete stero2;
	return (0);
}

