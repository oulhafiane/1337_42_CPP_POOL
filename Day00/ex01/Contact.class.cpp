/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 16:34:15 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/13 14:52:18 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

std::string	Contact::getLastName(void) const
{
	return this->_lastName;
}

void		Contact::fillContact(void)
{
	std::cout << "Enter the first name: ";
	if (!std::getline(std::cin, this->_firstName))
		exit(1);
	std::cout << "Enter the last name: ";
	if (!std::getline(std::cin, this->_lastName))
		exit(1);
	std::cout << "Enter the nick name: ";
	if (!std::getline(std::cin, this->_nickName))
		exit(1);
	std::cout << "Enter the phone number: ";
	if (!std::getline(std::cin, this->_phoneNumber))
		exit(1);
	std::cout << "Enter the darkest secret: ";
	if (!std::getline(std::cin, this->_darkestSecret))
		exit(1);
}

void		Contact::print(void) const
{
	std::cout << "===================================" << std::endl;
	std::cout << "First Name : " << this->_firstName << std::endl;
	std::cout << "Last Name : " << this->_lastName << std::endl;
	std::cout << "Nick Name : " << this->_nickName << std::endl;
	std::cout << "Phone Number : " << this->_phoneNumber << std::endl;
	std::cout << "Darkest Secret : " << this->_darkestSecret << std::endl;
	std::cout << "===================================" << std::endl;
}

void		Contact::printW(unsigned long wide) const
{
	unsigned long	lFirstName, lLastName, lNickName;

	lFirstName = this->_firstName.length() > wide ? wide - 1 : this->_firstName.length();
	lLastName = this->_lastName.length() > wide ? wide - 1 : this->_lastName.length();
	lNickName = this->_nickName.length() > wide ? wide - 1 : this->_nickName.length();
	std::cout << std::setw(wide) << this->_firstName.substr(0, lFirstName) + (lFirstName != this->_firstName.length() ? "." : "") << "|";
	std::cout << std::setw(wide) << this->_lastName.substr(0, lLastName) + (lLastName != this->_lastName.length() ? "." : "") << "|";
	std::cout << std::setw(wide) << this->_nickName.substr(0, lNickName) + (lNickName != this->_nickName.length() ? "." : "") << "|";
	std::cout << std::endl;
}
