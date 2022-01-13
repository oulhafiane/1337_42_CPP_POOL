/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:44:16 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/19 16:25:03 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Karen.hpp"

int		main(int ac, char **av)
{
	Karen	karen;
	int		index;
	int		i;

	if (ac != 2)
		return (1);
	index = karen.getIndexOfComplain(av[1]);
	if (index != -1) {
		for (i=index;i<4;i++) {
			std::cout << "[ " << karen.getIndexComplains()[i] << " ]" << std::endl;
			(karen.*(karen.getComplains())[i])();
			std::cout << std::endl;
		}	
	} else
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	return (0);
}
