/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:11:56 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/03 13:22:10 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Array.hpp"

int		main(void)
{
	int					i;
	Array<std::string>	tab(4);
	Array<int>			tabInt(4);
	Array<int*>			tabIntPtr(4);
	Array<float>		tabFloat(4);

	for (i=0;i<4;i++) {
		std::cout << "tab[" << i << "] : " << tab[i] << std::endl;
		std::cout << "tabInt[" << i << "] : " << tabInt[i] << std::endl;
		std::cout << "tabIntPtr[" << i << "] : " << ((tabIntPtr[i]) == NULL ? 0 : *(tabIntPtr[i])) << std::endl;
		std::cout << "tabFloat[" << i << "] : " << tabFloat[i] << std::endl;
	}
	
	std::cout << "==============" << std::endl;

	for (i=0;i<4;i++) {
		tab[i] = "salam ";
		tabInt[i] = i;
		tabIntPtr[i] = new int(i);
		tabFloat[i] = 13.37f + i;
	}
	tab[1] = "1337";
	tabInt[1] = 1337;
	tabFloat[1] = 42.42f;
	for (i=0;i<4;i++) {
		std::cout << "tab[" << i << "] : " << tab[i] << std::endl;
		std::cout << "tabInt[" << i << "] : " << tabInt[i] << std::endl;
		std::cout << "tabIntPtr[" << i << "] : " << *(tabIntPtr[i]) << std::endl;
		std::cout << "tabFloat[" << i << "] : " << tabFloat[i] << std::endl;
	}
	
	std::cout << "==============" << std::endl;

	Array<std::string>	copyTab(tab);
	Array<int>			copyTabInt(tabInt);
	Array<int*>			copyTabIntPtr(tabIntPtr);
	Array<float>		copyTabFloat = tabFloat;

	tab[1] = "42";
	tabInt[1] = 42;
	tabFloat[1] = 13.37f;

	for (i=0;i<4;i++) {
		std::cout << "copyTab[" << i << "] : " << copyTab[i] << std::endl;
		std::cout << "copyTabInt[" << i << "] : " << copyTabInt[i] << std::endl;
		std::cout << "copyTabIntPtr[" << i << "] : " << *(copyTabIntPtr[i]) << std::endl;
		std::cout << "copyTabFloat[" << i << "] : " << copyTabFloat[i] << std::endl;
	}

	std::cout << "==============" << std::endl;

	try {
		tab[100] = 1;
	} catch (std::exception & e) {
		std::cout << "Exception : Invalid Index" << std::endl;
	}

	for (i=0;i<4;i++) {
		delete tabIntPtr[i];
	}

	return (0);
}
