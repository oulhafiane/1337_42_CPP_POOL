/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/01 14:00:57 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/01 19:34:12 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <limits>
#include <string>

int		main(int ac, char **av)
{
	char		numc;
	float		numf;
	double		numd;
	int			numi;

	if (ac != 2)
		return (1);
	std::string		number(av[1]);
	try {
		numd = std::stod(number);
	} catch (std::exception const & e) {
		if (number.length() > 1) {
			std::cout << "Error: Conversion Impossible" << std::endl;
			return (1);
		} else {
			numd = static_cast<double>(number[0]);
		}
	}
	numc = static_cast<char>(numd);
	numf = static_cast<float>(numd);
	numi = static_cast<int>(numd);
	std::cout << "char: ";

	if (numf >= 0  && numf < 32)
		std::cout << "Non displayable" << std::endl;
	else if (numf >= 32 && numf <= 255)
		std::cout << "'" << numc << "'" << std::endl;
	else
		std::cout << "impossible" << std::endl;

	if (numf > std::numeric_limits<int>::max() || numf < std::numeric_limits<int>::lowest() || numf != numf)
		std::cout << "int: " << "impossible" << std::endl;
	else
		std::cout << "int: " << numi << std::endl;

	std::cout << "float: " << std::fixed << std::setprecision(1) <<  numf << "f" << std::endl;
	std::cout << "double: " << numd << std::endl;
	return (0);
}
