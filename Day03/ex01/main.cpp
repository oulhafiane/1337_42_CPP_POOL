/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:47:09 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/23 13:12:40 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int		main(void)
{
	ClapTrap	clap;
	ClapTrap	clap2("clap2");
	ClapTrap	clap3(clap);
	std::cout << "=============" << std::endl;
	ScavTrap	scav("scav1");
	ScavTrap	scav2(scav);
	ScavTrap	scav3;
	scav2.setName("scav2");
	scav3.setName("scav3");
	std::cout << "=============" << std::endl;
	
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
	std::cout << "=============" << std::endl;
	scav.attack("scav2");
	scav2.takeDamage(scav.getAttackDamage());
	std::cout << "Scav1 => Hits : " << scav.getHitPoints() << ", Energy : " << scav.getEnergyPoints() << std::endl;
	std::cout << "Scav2 => Hits : " << scav2.getHitPoints() << ", Energy : " << scav2.getEnergyPoints() << std::endl;
	scav2.attack("scav3");
	scav3.takeDamage(scav2.getAttackDamage());
	std::cout << "Scav2 => Hits : " << scav2.getHitPoints() << ", Energy : " << scav2.getEnergyPoints() << std::endl;
	std::cout << "Scav3 => Hits : " << scav3.getHitPoints() << ", Energy : " << scav3.getEnergyPoints() << std::endl;
	scav.guardGate();
	scav2.guardGate();
	scav3.guardGate();
	std::cout << "=============" << std::endl;
	return (0);
}
