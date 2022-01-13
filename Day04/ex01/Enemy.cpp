/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 09:01:52 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/25 10:49:29 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(void)
{
	return ;
}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type)
{
	return ;
}

Enemy::Enemy(Enemy const & enemy)
{
	*this = enemy;

	return ;
}

Enemy::~Enemy(void)
{
	return ;
}

Enemy &							Enemy::operator=(Enemy const & enemy)
{
	this->_hp = enemy._hp;
	this->_type = enemy._type;

	return (*this);
}

int								Enemy::getHP(void) const
{
	return (this->_hp);
}

std::string const &				Enemy::getType(void) const
{
	return (this->_type);
}

void							Enemy::takeDamage(int damage)
{
	if (this->_hp - damage <= 0)
		this->_hp = 0;
	else
		this->_hp -= damage;
}
