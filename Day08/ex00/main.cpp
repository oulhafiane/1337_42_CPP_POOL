/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:17:31 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/04 11:39:36 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <list>
#include <vector>
#include "easyfind.hpp"

int		main(void)
{
	std::list<int>			lInt;
	std::vector<int>		vInt;

	lInt.push_back(1);
	lInt.push_back(42);
	lInt.push_back(1337);
	lInt.push_back(1);

	vInt.push_back(1);
	vInt.push_back(42);
	vInt.push_back(1337);
	vInt.push_back(1);

	std::cout << easyfind(lInt, 1337) << std::endl;
	std::cout << easyfind(vInt, 42) << std::endl;
	std::cout << &(vInt[0]) << " = " << &easyfind(vInt, 1) << std::endl;
	try {
		std::cout << easyfind(vInt, 21) << std::endl;
	} catch (std::out_of_range const & e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}
