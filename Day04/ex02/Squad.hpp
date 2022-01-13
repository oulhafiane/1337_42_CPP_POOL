/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 14:50:18 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 17:03:32 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

#include "ISquad.hpp"
#include "ISpaceMarine.hpp"

class Squad : public ISquad
{
	private:
		int						_count;
		ISpaceMarine			**_units;

	public:
		Squad(void);
		Squad(Squad const & squad);
		virtual ~Squad(void);

		Squad &					operator=(Squad const & squad);
		int						getCount(void) const;
		ISpaceMarine *			getUnit(int i) const;
		int						push(ISpaceMarine * unit);
};

#endif
