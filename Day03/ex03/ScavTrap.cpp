/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:49:07 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 09:17:36 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	std::cout << "ScavTrap Normal Constructor Called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string const & name) : ClapTrap(name)
{
	std::cout << "ScavTrap Constructor By Name Called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const & trap) : ClapTrap(trap)
{
	std::cout << "ScavTrap Constructor By Copy Called." << std::endl;
	*this = trap;

	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->_name << " Destructed." << std::endl;
	return ;
}

int				ScavTrap::getHitPoints(void)
{
	return (this->_hitPoints);
}

void			ScavTrap::setHitPoints(int points)
{
	this->_hitPoints = points;
}

int				ScavTrap::getEnergyPoints(void)
{
	return (this->_energyPoints);
}

void			ScavTrap::setEnergyPoints(int points)
{
	this->_energyPoints = points;
}

int				ScavTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}

void			ScavTrap::setAttackDamage(int damage)
{
	this->_attackDamage = damage;
}

ScavTrap&		ScavTrap::operator=(ScavTrap const & trap)
{
	this->_name = trap._name;
	this->_hitPoints = trap._hitPoints;
	this->_energyPoints = trap._energyPoints;
	this->_attackDamage = trap._attackDamage;

	return (*this);
}

void			ScavTrap::attack(std::string const & target)
{
	std::cout << "Scavtrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_hitPoints++;
}

void			ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << this->_name << " get damaged by " << amount << " points of damage!" << std::endl;
	this->_energyPoints -= amount;
}

void			ScavTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount;
	std::cout << "ScavTrap " << this->_name << " has beed repaired, and energy points retored to " << this->_energyPoints << "!" << std::endl;

}

void			ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " has been enterred in Gate keeper mode!" << std::endl;
}
