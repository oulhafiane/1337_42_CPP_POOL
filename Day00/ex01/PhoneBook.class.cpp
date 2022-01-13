/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 17:39:40 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/13 16:03:42 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void) : max(8), _total(0)
{
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

Contact	PhoneBook::getContacts(int index) const
{
	if (index < 0 || index >= this->max)
		throw std::exception();
	return this->_contacts[index];
}

int		PhoneBook::getTotal(void) const
{
	return this->_total;
}

int		PhoneBook::add(Contact contact, int index)
{
	if (index < 0 || index >= this->max)
		return (-1);
	if (this->_total >= this->max)
		this->_contacts[index] = contact;
	else {
		this->_contacts[this->_total] = contact;
		this->_total++;
	}
	return (index);
}

void	PhoneBook::print(void) const
{
	int		i;

	std::cout << std::setw(10) << "Index" << "|";
	std::cout << std::setw(10) << "First Name" << "|";
	std::cout << std::setw(10) << "Last Name" << "|";
	std::cout << std::setw(10) << "Nick Name" << "|" << std::endl;
	std::cout << std::string(44, '-') << std::endl;
	for (i=0;i<this->_total;i++) {
		std::cout << std::setw(10) << i + 1 << "|";
		this->_contacts[i].printW(10);
	}
}
