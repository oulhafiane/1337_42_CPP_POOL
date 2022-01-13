/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:47:09 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/23 11:46:34 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

int		main(void)
{
	ClapTrap	clap;
	ClapTrap	clap2("clap2");
	ClapTrap	clap3(clap);
	
	clap.setName("clap1");
	clap3.setName("clap3");
	clap.attack("clap2");
	clap2.takeDamage(clap.getAttackDamage());
	std::cout << "Clap1 => Hits : " << clap.getHitPoints() << ", Energy : " << clap.getEnergyPoints() << std::endl;
	std::cout << "Clap2 => Hits : " << clap2.getHitPoints() << ", Energy : " << clap2.getEnergyPoints() << std::endl;
	std::cout << "Clap3 => Hits : " << clap3.getHitPoints() << ", Energy : " << clap3.getEnergyPoints() << std::endl;
	clap3.setAttackDamage(10);
	clap3.attack("clap2");
	clap2.takeDamage(clap3.getAttackDamage());
	std::cout << "Clap2 => Hits : " << clap2.getHitPoints() << ", Energy : " << clap2.getEnergyPoints() << std::endl;
	std::cout << "Clap3 => Hits : " << clap3.getHitPoints() << ", Energy : " << clap3.getEnergyPoints() << std::endl;
	clap2.beRepaired(20);
	std::cout << "Clap2 => Hits : " << clap2.getHitPoints() << ", Energy : " << clap2.getEnergyPoints() << std::endl;
	return (0);
}
