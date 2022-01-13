/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:48:06 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 09:15:08 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
	protected:
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;

	public:
		FragTrap(void);
		FragTrap(std::string const & name);
		FragTrap(FragTrap const & trap);
		~FragTrap(void);

		int			getHitPoints(void);
		void		setHitPoints(int points);
		int			getEnergyPoints(void);
		void		setEnergyPoints(int points);
		int			getAttackDamage(void);
		void		setAttackDamage(int damage);
		FragTrap&	operator=(FragTrap const & trap);
		void		attack(std::string const & target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);
		void		highFivesGuys(void);
};

#endif
