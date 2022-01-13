/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 09:46:58 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/23 11:46:33 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Normal Constructor Called." << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "Constructor By Name Called." << std::endl;
	this->_name = name;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const & clapTrap)
{
	std::cout << "Constructor By Copy Called." << std::endl;
	*this = clapTrap;

	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor Called." << std::endl;
}

ClapTrap&				ClapTrap::operator=(ClapTrap const & clap)
{
	this->_name = clap._name;
	this->_hitPoints = clap._hitPoints;
	this->_energyPoints = clap._energyPoints;
	this->_attackDamage = clap._attackDamage;

	return (*this);
}

std::string const &		ClapTrap::getName(void) const
{
	return (this->_name);
}

void					ClapTrap::setName(std::string const & name)
{
	this->_name = name;
}

int						ClapTrap::getHitPoints(void) const
{
	return (this->_hitPoints);
}

void					ClapTrap::setHitPoints(int points)
{
	this->_hitPoints = points;
}

int						ClapTrap::getEnergyPoints(void) const
{
	return (this->_energyPoints);
}

void					ClapTrap::setEnergyPoints(int points)
{
	this->_energyPoints = points;
}

int						ClapTrap::getAttackDamage(void) const
{
	return (this->_attackDamage);
}

void					ClapTrap::setAttackDamage(int damage)
{
	this->_attackDamage = damage;
}

void					ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage!" << std::endl;
	this->_hitPoints++;
}

void					ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " get damaged by " << amount << " points of damage!" << std::endl;
	this->_energyPoints -= amount;
}

void					ClapTrap::beRepaired(unsigned int amount)
{
	this->_energyPoints += amount;
	std::cout << "ClapTrap " << this->_name << " has been repaired, and energy points restored to " << this->_energyPoints << "!" << std::endl;
}
