/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MiningBarge.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:33:32 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:18:39 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MININGBARGE_HPP
# define MININGBARGE_HPP

#include "IMiningLaser.hpp"
#include "IAsteroid.hpp"

class MiningBarge
{
	private:
		IMiningLaser		**_lasers;

	public:
		MiningBarge(void);
		MiningBarge(MiningBarge const & barge);
		virtual ~MiningBarge(void);

		MiningBarge &		operator=(MiningBarge const & barge);
		void				equip(IMiningLaser*);
		void				mine(IAsteroid*) const;
};

#endif
