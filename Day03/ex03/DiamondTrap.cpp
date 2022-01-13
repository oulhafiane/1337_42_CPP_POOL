/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 14:43:34 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 09:26:44 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	std::cout << "DiamondTrap Normal Constructor Called!" << std::endl;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap Constructor By Name Called!" << std::endl;
	this->_name = name;
	this->_hitPoints = this->FragTrap::_hitPoints;
	this->_energyPoints = this->ScavTrap::_energyPoints;
	this->_attackDamage = this->FragTrap::_attackDamage;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const & trap)
{
	std::cout << "DiamondTrap Constructor By Copy Called!" << std::endl;
	*this = trap;

	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " Destructed." << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const & trap)
{
	this->_name = trap._name;
	this->_hitPoints = trap._hitPoints;
	this->_energyPoints = trap._energyPoints;
	this->_attackDamage = trap._attackDamage;

	return (*this);
}

std::string const &	DiamondTrap::getName(void)
{
	return (this->_name);
}

void				DiamondTrap::setName(std::string const & name)
{
	this->_name = name;
	this->ClapTrap::_name = name + "_clap_name";
}

int					DiamondTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void				DiamondTrap::setHitPoints(int points)
{
	this->_hitPoints = points;
}

int					DiamondTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

void				DiamondTrap::setEnergyPoints(int points)
{
	this->_energyPoints = points;
}

int					DiamondTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void				DiamondTrap::setAttackDamage(int damage)
{
	this->_attackDamage = damage;
}

void				DiamondTrap::attack(std::string target)
{
	this->ScavTrap::attack(target);
	this->_hitPoints = this->ScavTrap::_hitPoints;
}

void				DiamondTrap::takeDamage(int amount)
{
	std::cout << "DiamondTrap " << this->_name << " get damaged by " << amount << " points of damage!" << std::endl;
	this->_energyPoints -= amount;
}

void				DiamondTrap::whoAmI(void)
{
	std::cout << "My Name : " << this->_name << std::endl;
	std::cout << "My ClapTrap Name : " << this->ClapTrap::_name << std::endl;
}
