/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:40:03 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/19 16:20:52 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "Karen.hpp"

Karen::Karen(void)
{
	_indexComplains[0] = "DEBUG";
	_indexComplains[1] = "INFO";
	_indexComplains[2] = "WARNING";
	_indexComplains[3] = "ERROR";
	_complains[0] = &Karen::debug;
	_complains[1] = &Karen::info;
	_complains[2] = &Karen::warning;
	_complains[3] = &Karen::error;
	return ;
}

Karen::~Karen(void)
{
	return ;
}

void			Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl;
	std::cout << "I just love it!" << std::endl;
}

void			Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money" << std::endl;
	std::cout << "You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void			Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
	std::cout << "I’ve been coming here for years and you just started working here last month." << std::endl;
}

void				Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

int					Karen::getIndexOfComplain(std::string level)
{
	int		i;

	for (i=0;i<4;i++) {
		if (this->_indexComplains[i].compare(level) == 0)
			return (i);
	}
	return (-1);
}

std::string			*Karen::getIndexComplains(void)
{
	return this->_indexComplains;
}

Karen::_complain	*Karen::getComplains(void)
{
	return this->_complains;
}

void				Karen::complain(std::string level)
{
	int		index;

	index = this->getIndexOfComplain(level);
	if (index != -1)
		(this->*(this->_complains[index]))();
}
