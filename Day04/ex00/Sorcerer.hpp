/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 12:05:47 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 15:55:31 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <string>
#include "Victim.hpp"

class Sorcerer
{
	private:
		std::string				_name;
		std::string				_title;

		Sorcerer(void);

	public:
		Sorcerer(std::string name, std::string title);
		Sorcerer(Sorcerer const & sorcerer);
		virtual ~Sorcerer(void);

		Sorcerer &				operator=(Sorcerer const & sorcerer);
		std::string const &		getName(void) const;
		std::string const &		getTitle(void) const;
		void					polymorph(Victim const & victim);
};

std::ostream &					operator<<(std::ostream & o, Sorcerer const & sorcerer);

#endif

