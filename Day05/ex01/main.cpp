/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:08:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 19:45:55 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main(void)
{
	Bureaucrat *a = new Bureaucrat("zoulhafi", 2);
	try {
		a = new Bureaucrat("test", 0);
	} catch (std::exception & e) {
		std::cout << "Constructor Exception: " << e.what() << std::endl;
	}
	std::cout << *a;
	a->increment();
	std::cout << *a;
	try {
		a->increment();
	} catch (std::exception & e) {
		std::cout << "Increment Exception: " << e.what() << std::endl;
	}
	for (int i=0;i<152;i++) {
		try {
			a->decrement();
		} catch (std::exception & e) {
			std::cout << "Decrement Exception: " << e.what() << std::endl;
		}
	}
	std::cout << *a;
	Bureaucrat b(*a);
	std::cout << b;
	delete a;
	std::cout << "==============Ex01==============" << std::endl;
	Form *f = new Form("internship", 20, 30);
	try {
		f = new Form("testForm1", -1, 30);
	} catch (std::exception & e) {
		std::cout << "Constructor Exception: " << e.what() << std::endl;
	}
	try {
		f = new Form("testForm2", 30, 151);
	} catch (std::exception & e) {
		std::cout << "Constructor Exception: " << e.what() << std::endl;
	}
	std::cout << *f;
	b.signForm(*f);
	for (int i=0;i<129;i++) {
			b.increment();
	}
	std::cout << b;
	std::cout << *f;
	b.signForm(*f);
	b.increment();
	std::cout << b;
	std::cout << *f;
	b.signForm(*f);
	std::cout << *f;
	delete f;
	return (0);
}
