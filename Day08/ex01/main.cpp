/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:14:58 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/04 15:51:43 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	std::vector<int> v(10000, 50);
	Span sp10000(10000);
	Span spEmpty(100);

	v[125] = 2;
	v[5544] = 202;
	v[9554] = 53;

	sp10000.addNumber(v.begin(), v.end());

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	std::cout << "==============" << std::endl;
	std::cout << sp10000.shortestSpan() << std::endl;
	std::cout << sp10000.longestSpan() << std::endl;

	try {
		spEmpty.shortestSpan();
	} catch (std::exception const & e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	spEmpty.addNumber(5);
	try {
		spEmpty.shortestSpan();
	} catch (std::exception const & e) {
		std::cout << "Error : " << e.what() << std::endl;
	}
	return (0);
}
