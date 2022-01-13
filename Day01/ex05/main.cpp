/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:44:16 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/19 16:01:30 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int		main(void)
{
	Karen karen;

	std::cout << "[ DEBUG ]" << std::endl;
	karen.complain("DEBUG");
	std::cout << "[ INFO ]" << std::endl;
	karen.complain("INFO");
	std::cout << "[ WARNING ]" << std::endl;
	karen.complain("WARNING");
	std::cout << "[ ERROR ]" << std::endl;
	karen.complain("ERROR");
	std::cout << "[ LOL ]" << std::endl;
	karen.complain("lol");
	std::cout << "[ EMPTY ]" << std::endl;
	karen.complain("");
	return (0);
}
