/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:27:23 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/02 10:37:44 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <exception>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *			generate(void)
{
	int		r = (rand() % 4) + 1;
	switch (r) {
		case 1:
			std::cout << "Generated A Class" << std::endl;
			return (new A());
		case 2:
			std::cout << "Generated B Class" << std::endl;
			return (new B());
		case 3:
			std::cout << "Generated C Class" << std::endl;
			return (new C());
		default:
			std::cout << "Generated B Class" << std::endl;
			return (new B());
	}
}

void			identify(Base * p)
{
	A *	a = dynamic_cast<A*>(p);
	if (a != NULL) {
		std::cout << "A" << std::endl;
		return ;
	}
	B * b = dynamic_cast<B*>(p);
	if (b != NULL) {
		std::cout << "B" << std::endl;
		return ;
	}
	C * c = dynamic_cast<C*>(p);
	if (c != NULL) {
		std::cout << "C" << std::endl;
		return ;
	}
	std::cout << "None" << std::endl;
}

void			identify(Base & p)
{
	try {
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A" << std::endl;
		return ;
	} catch (std::bad_cast &bc) {
	}
	try {
		B & b = dynamic_cast<B&>(p);
		(void)b;
		std::cout << "B" << std::endl;
		return ;

	} catch (std::bad_cast &bc) {
	}
	try {
		C & c = dynamic_cast<C&>(p);
		(void)c;
		std::cout << "C" << std::endl;
		return ;
	} catch (std::bad_cast &bc) {
	}
	std::cout << "None" << std::endl;
}

int				main(void)
{
	srand(time(NULL));
	Base *	b1 = generate();
	Base *	b2 = generate();
	Base *	b3 = generate();
	Base *	b4 = generate();
	Base *	b5 = generate();
	Base *	b6 = generate();
	std::cout << "==============" << std::endl;
	identify(b1);
	identify(*b1);
	std::cout << "==============" << std::endl;
	identify(b2);
	identify(*b2);
	std::cout << "==============" << std::endl;
	identify(b3);
	identify(*b3);
	std::cout << "==============" << std::endl;
	identify(b4);
	identify(*b4);
	std::cout << "==============" << std::endl;
	identify(b5);
	identify(*b5);
	std::cout << "==============" << std::endl;
	identify(b6);
	identify(*b6);
	std::cout << "==============" << std::endl;
	delete b1;
	delete b2;
	delete b3;
	delete b4;
	delete b5;
	delete b6;
	return (0);
}
