/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 11:06:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/11 11:43:53 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
	int i;
	int j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (i=1;i<ac;i++)
	{
		j = 0;
		while (av[i][j] != '\0') {
			std::cout << (char)((av[i][j] > 96 && av[i][j] < 123) ? av[i][j] - 32 : av[i][j]);
			j++;
		}
	}
	std::cout << std::endl;
	return (0);
}
