/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 12:57:03 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 13:25:06 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
# define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
	public:
		TacticalMarine(void);
		TacticalMarine(TacticalMarine const & unit);
		virtual ~TacticalMarine(void);

		TacticalMarine &			operator=(TacticalMarine const & unit);
		TacticalMarine *			clone(void) const;
		void						battleCry(void) const;
		void						rangedAttack(void) const;
		void						meleeAttack(void) const;
};

#endif


