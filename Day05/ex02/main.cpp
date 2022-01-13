/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:08:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 09:41:18 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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
	std::cout << "==============Ex02==============" << std::endl;
	AForm *f = new ShrubberyCreationForm("tree");
	AForm *Rf = new RobotomyRequestForm("zakaria");
	AForm *Pf = new PresidentialPardonForm("zoulhafi");
	std::cout << b;
	std::cout << *f;
	std::cout << *Rf;
	std::cout << *Pf;
	b.signForm(*f);
	b.executeForm(*f);
	b.signForm(*Rf);
	b.executeForm(*Rf);
	b.signForm(*Pf);
	b.executeForm(*Pf);
	for (int i=0;i<5;i++) {
			b.increment();
	}
	std::cout << b;
	std::cout << *f;
	b.signForm(*f);
	b.executeForm(*f);
	b.signForm(*Rf);
	b.executeForm(*Rf);
	b.signForm(*Pf);
	b.executeForm(*Pf);
	Bureaucrat bb("bb", 30);
	std::cout << bb;
	bb.executeForm(*f);
	bb.signForm(*Rf);
	bb.executeForm(*Rf);
	bb.signForm(*Pf);
	bb.executeForm(*Pf);
	std::cout << *f;
	for (int i=0;i<5;i++) {
			bb.increment();
	}
	std::cout << bb;
	bb.signForm(*Pf);
	bb.executeForm(*Pf);
	for (int i=0;i<20;i++) {
			bb.increment();
	}
	std::cout << bb;
	bb.executeForm(*Pf);
	delete f;
	return (0);
}
