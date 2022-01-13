/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:06:54 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 20:01:35 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string				_type;
		unsigned int			_xp;

		AMateria(void);

	public:
		AMateria(std::string const & type);
		AMateria(AMateria const & materia);
		virtual ~AMateria(void);

		AMateria &				operator=(AMateria const & materia);
		std::string const &		getType(void) const;
		unsigned int			getXP(void) const;

		virtual AMateria *		clone(void) const = 0;		
		virtual void			use(ICharacter & target);
};

#endif
