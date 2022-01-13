/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:46:32 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/23 11:46:31 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <string>

class ClapTrap
{
	private:
		std::string				_name;
		int						_hitPoints;
		int						_energyPoints;
		int						_attackDamage;

	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & clapTrap);
		~ClapTrap(void);

		ClapTrap&				operator=(ClapTrap const & clap);
		std::string	const &		getName(void) const;
		void					setName(std::string const & name);
		int						getHitPoints(void) const;
		void					setHitPoints(int points);
		int						getEnergyPoints(void) const;
		void					setEnergyPoints(int points);
		int						getAttackDamage(void) const;
		void					setAttackDamage(int damage);
		void					attack(std::string const & target);
		void					takeDamage(unsigned int amount);
		void					beRepaired(unsigned int amount);
};

#endif
