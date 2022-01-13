/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 12:08:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 12:57:44 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <iostream>
#include "Bureaucrat.hpp"

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
	return (0);
}
