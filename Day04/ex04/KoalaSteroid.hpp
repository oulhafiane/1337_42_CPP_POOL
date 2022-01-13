/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   KoalaSteroid.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:38:00 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 11:14:18 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KOALASTEROID_HPP
# define KOALASTEROID_HPP

#include <string>
#include "IAsteroid.hpp"

class Asteroid : public IAsteroid
{
	public:
		Asteroid(void);
		Asteroid(Asteroid const & astero);
		virtual ~Asteroid(void);

		Asteroid &				operator=(Asteroid const & astero);
		std::string				getName(void) const;
		std::string				beMined(DeepCoreMiner const & miner) const;
		std::string				beMined(StripMiner const & miner) const;
};

#endif
