/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:42:59 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 09:03:43 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	private:
		std::string			_name;
		int					_hitPoints;
		int					_energyPoints;
		int					_attackDamage;

	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & trap);
		~DiamondTrap(void);

		DiamondTrap&		operator=(DiamondTrap const & trap);
		std::string const &	getName(void);
		void				setName(std::string const & name);
		int					getHitPoints(void) const;
		void				setHitPoints(int points);
		int					getEnergyPoints(void) const;
		void				setEnergyPoints(int points);
		int					getAttackDamage(void) const;
		void				setAttackDamage(int damage);
		void				attack(std::string target);
		void				takeDamage(int amount);
		void				whoAmI(void);
};

#endif
