/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 10:05:10 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/05 15:57:38 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include "mutantstack.hpp"

int			main(void)
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(500);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << "=======" << std::endl;
	std::stack<int> s(mstack);
	std::cout << s.top() << std::endl;
	std::cout << "=======" << std::endl;
	MutantStack<int, std::vector<int> > mstack2;
	mstack2.push(737);
	mstack2.push(0);
	MutantStack<int, std::vector<int> >::iterator it2 = mstack2.begin();
	MutantStack<int, std::vector<int> >::iterator ite2 = mstack2.end();
	while (it2 != ite2)
	{
		std::cout << *it2 << std::endl;
		it2++;
	}
	return 0;
}
