/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DeepCoreMiner.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:25:54 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:15:07 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEEPCOREMINER_HPP
# define DEEPCOREMINER_HPP

#include "IMiningLaser.hpp"
class IAsteroid;

class DeepCoreMiner : public IMiningLaser
{
	public:
		DeepCoreMiner(void);
		DeepCoreMiner(DeepCoreMiner const & miner);
		virtual ~DeepCoreMiner(void);

		DeepCoreMiner &				operator=(DeepCoreMiner const & miner);
		void						mine(IAsteroid * astero);
};

#include "IAsteroid.hpp"

#endif
