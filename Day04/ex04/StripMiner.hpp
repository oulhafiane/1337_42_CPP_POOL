/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StripMiner.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:29:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:14:02 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRIPMINER_HPP
# define STRIPMINER_HPP

#include "IMiningLaser.hpp"
class IAsteroid;

class StripMiner : public IMiningLaser
{
	public:
		StripMiner(void);
		StripMiner(StripMiner const & miner);
		virtual ~StripMiner(void);

		StripMiner &				operator=(StripMiner const & miner);
		void						mine(IAsteroid * astero);
};

#include "IAsteroid.hpp"

#endif
