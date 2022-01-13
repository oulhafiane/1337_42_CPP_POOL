/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IAsteroid.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 09:37:10 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/27 12:13:19 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IASTEROID_HPP
# define IASTEROID_HPP

#include <string>
class DeepCoreMiner;
class StripMiner;

class IAsteroid
{
	public:
		virtual ~IAsteroid() {}
		virtual std::string beMined(DeepCoreMiner const & miner) const = 0;
		virtual std::string beMined(StripMiner const & miner) const = 0;
		virtual std::string getName() const = 0;
};

#include "DeepCoreMiner.hpp"
#include "StripMiner.hpp"

#endif
