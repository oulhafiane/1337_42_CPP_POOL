/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 11:49:07 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/24 09:17:58 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	std::cout << "FragTrap Normal Constructor Called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(std::string const & name) : ClapTrap(name)
{
	std::cout << "FragTrap Constructor By Name Called." << std::endl;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	return ;
}

FragTrap::FragTrap(FragTrap const & trap) : ClapTrap(trap)
{
	std::cout << "FragTrap Constructor By Copy Called." << std::endl;
	*this = trap;

	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " Destructed." << std::endl;
	return ;
}

int				FragTrap::getHitPoints(void)
{
	return (this->_hitPoints);
}

void			FragTrap::setHitPoints(int points)
{
	this->_hitPoints = points;
}

int				FragTrap::getEnergyPoints(void)
{
	return (this->_energyPoints);
}

void			FragTrap::setEnergyPoints(int points)
{
	this->_energyPoints = points;
}

int				FragTrap::getAttackDamage(void)
{
	return (this->_attackDamage);
}

void			FragTrap::setAttackDamage(int damage)
{
	this->_attackDamage = damage;
}

FragTrap&		FragTrap::operator=(FragTrap const & trap)
{
	this->_name = trap._name;
	this->_hitPoints = trap._hitPoints;
	this->_energyPoints = trap._energyPoints;
	this->_attackDamage = trap._attackDamage;

	return (*this);
}

void			FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_hitPoints++;
}

void			FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << this->_name << " get damaged by " << amount << " points of damage!" << std::endl;
	this->_energyPoints -= amount;
}

void			FragTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount;
	std::cout << "FragTrap " << this->_name << " has beed repaired, and energy points retored to " << this->_energyPoints << "!" << std::endl;

}

void			FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " asks: Give me a high five guys!" << std::endl;
}
