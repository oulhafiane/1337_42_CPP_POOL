/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 14:20:26 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 16:11:59 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

#include <string>
#include "Victim.hpp"

class Peon : public Victim
{
	private:
		Peon(void);
		
	public:
		Peon(std::string name);
		Peon(Peon const & peon);
		virtual ~Peon(void);

		Peon &			operator=(Peon const & peon);
		void			getPolymorphed(void) const;
};

#endif

