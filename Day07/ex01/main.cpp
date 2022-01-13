/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:49:07 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/03 11:07:40 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "iter.hpp"

int		main(void)
{
	int				a[4] = { 42, 1337, -42, -1337 };
	float			b[3] = { 42.42f, 13.37f, -42.42f };
	std::string		c[2] = { "Hello", "1337" };

	std::cout << "===========" << std::endl;
	iter(a, 4, &print);
	std::cout << "===========" << std::endl;
	iter(b, 3, &print);
	std::cout << "===========" << std::endl;
	iter(c, 2, &print);
	std::cout << "===========" << std::endl;
	return (0);
}
