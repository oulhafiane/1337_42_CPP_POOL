/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:47:09 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 09:27:22 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	FragTrap	frag;
	FragTrap	frag2("frag2");
	frag2.setAttackDamage(80);
	FragTrap	frag3(frag2);
	frag.setName("frag1");
	frag3.setName("frag3");
	std::cout << "=============" << std::endl;
	DiamondTrap	diamond("diamond1");
	DiamondTrap	diamond2(diamond);
	DiamondTrap diamond3;
	diamond2.setName("diamond2");
	diamond3.setName("diamond3");
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
	scav3.beRepaired(50);
	std::cout << "Scav3 => Hits : " << scav3.getHitPoints() << ", Energy : " << scav3.getEnergyPoints() << std::endl;
	scav.guardGate();
	scav2.guardGate();
	scav3.guardGate();
	std::cout << "=============" << std::endl;
	frag.attack("frag2");
	frag2.takeDamage(frag.getAttackDamage());
	std::cout << "frag1 => Hits : " << frag.getHitPoints() << ", Energy : " << frag.getEnergyPoints() << std::endl;
	std::cout << "frag2 => Hits : " << frag2.getHitPoints() << ", Energy : " << frag2.getEnergyPoints() << std::endl;
	frag2.attack("frag3");
	frag3.takeDamage(frag2.getAttackDamage());
	std::cout << "frag2 => Hits : " << frag2.getHitPoints() << ", Energy : " << frag2.getEnergyPoints() << std::endl;
	std::cout << "frag3 => Hits : " << frag3.getHitPoints() << ", Energy : " << frag3.getEnergyPoints() << std::endl;
	frag3.beRepaired(20);
	std::cout << "frag3 => Hits : " << frag3.getHitPoints() << ", Energy : " << frag3.getEnergyPoints() << std::endl;
	frag.highFivesGuys();
	frag2.highFivesGuys();
	frag3.highFivesGuys();
	std::cout << "=============" << std::endl;
	std::cout << "diamond1 => Hits : " << diamond.getHitPoints() << ", Energy : " << diamond.getEnergyPoints() << ", Attack: " << diamond.getAttackDamage() << std::endl;
	std::cout << "diamond2 => Hits : " << diamond2.getHitPoints() << ", Energy : " << diamond2.getEnergyPoints() << ", Attack: " << diamond2.getAttackDamage() << std::endl;
	diamond.attack("diamond2");
	diamond2.takeDamage(diamond.ScavTrap::getAttackDamage());
	std::cout << "diamond1 => Hits : " << diamond.getHitPoints() << ", Energy : " << diamond.getEnergyPoints() << std::endl;
	std::cout << "diamond2 => Hits : " << diamond2.getHitPoints() << ", Energy : " << diamond2.getEnergyPoints() << std::endl;
	diamond2.ClapTrap::beRepaired(100);
	std::cout << "diamond2 => Hits : " << diamond2.getHitPoints() << ", Energy : " << diamond2.ClapTrap::getEnergyPoints() << std::endl;
	diamond.guardGate();
	diamond3.guardGate();
	diamond2.highFivesGuys();
	diamond3.highFivesGuys();
	diamond.whoAmI();
	diamond2.whoAmI();
	diamond3.whoAmI();
	std::cout << "=============" << std::endl;
	return (0);
}
