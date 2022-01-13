/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:22:29 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 16:12:52 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <string>

class Victim
{
	protected:
		std::string				_name;

		Victim(void);

	public:
		Victim(std::string name);
		Victim(Victim const & victim);
		virtual ~Victim(void);

		Victim &				operator=(Victim const & victim);
		std::string const &		getName(void) const;
		virtual void			getPolymorphed(void) const;
};

std::ostream &					operator<<(std::ostream & o, Victim const & victim);

#endif
