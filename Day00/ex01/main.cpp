/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 13:59:27 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/14 09:55:46 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.class.hpp"
#include "PhoneBook.class.hpp"

static int	getIndexFromUser(PhoneBook *phonebook, std::string msg)
{	
	int index;

	std::string buf;
	do {
		std::cout << msg;
		if (!(std::cin >> buf))
			exit(1);
		std::cin.ignore(1, '\n');
		index = atoi(buf.c_str());
	} while (index < 1 || index > phonebook->getTotal());
	return (index);
}

static void	add(PhoneBook *phonebook)
{
	int index = phonebook->getTotal();
	if (index >= phonebook->max) {
		std::string rep;
		std::cout << "PhoneBook is full, do you want to delete a contact ? yes or no : ";
		if (!(std::cin >> rep))
			exit(1);
		std::cin.ignore(1, '\n');
		if (rep.compare("yes") == 0) {
			phonebook->print();
			index = getIndexFromUser(phonebook, "Enter the index of the contact that you want to delete : ") - 1;
		} else
			return ;
	}
	Contact contact;
	contact.fillContact();
	try {
		if (phonebook->add(contact, index) != -1)
			std::cout << "Contact " << phonebook->getContacts(index).getLastName() << " Created Successfully." << std::endl;
		else
			std::cout << "An error occured, the index is not correct!!!" << std::endl;
	} catch (std::exception e) {
		std::cout << "An error occured, the index is not correct!!!" << std::endl;
	}
}

static void	search(PhoneBook *phonebook)
{
	if (phonebook->getTotal() == 0)
	{
		std::cout << "PhoneBook is empty!" << std::endl;
		return ;
	}
	int index;
	phonebook->print();
	index = getIndexFromUser(phonebook, "Enter the index of the contact that you want to explore : ");
	try {
		phonebook->getContacts(index - 1).print();
	} catch (std::exception e) {
		std::cout << "An error occured, the index is not correct!!!" << std::endl;
	}
}

int		main(void)
{
	std::string buf;
	PhoneBook phonebook;
	std::cout << "Enter your command(ADD, SEARCH, EXIT): ";
	while (std::getline(std::cin, buf)) {
		if (buf.compare("EXIT") == 0)
			return (0);
		else if (buf.compare("ADD") == 0)
			add(&phonebook);
		else if (buf.compare("SEARCH") == 0)
			search(&phonebook);
		std::cout << "Enter your command(ADD, SEARCH, EXIT): ";
		buf.clear();
	}
	return (1);
}
