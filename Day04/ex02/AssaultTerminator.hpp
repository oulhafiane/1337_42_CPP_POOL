/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 13:03:20 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 13:25:08 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
# define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator : public ISpaceMarine
{
	public:
		AssaultTerminator(void);
		AssaultTerminator(AssaultTerminator const & unit);
		virtual ~AssaultTerminator(void);

		AssaultTerminator &			operator=(AssaultTerminator const & unit);
		AssaultTerminator *			clone(void) const;
		void						battleCry(void) const;
		void						rangedAttack(void) const;
		void						meleeAttack(void) const;
};

#endif
