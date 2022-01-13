/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AsteroKreog.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 10:22:19 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 11:15:01 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASTEROKREOG_HPP
# define ASTEROKREOG_HPP

#include <string>
#include "IAsteroid.hpp"

class Comet: public IAsteroid
{
	public:
		Comet(void);
		Comet(Comet const & comet);
		virtual ~Comet(void);

		Comet &					operator=(Comet const & comet);
		std::string				getName(void) const;
		std::string				beMined(DeepCoreMiner const & miner) const;
		std::string				beMined(StripMiner const & miner) const;
};

#endif
