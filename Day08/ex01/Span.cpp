/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 12:48:17 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/04 15:47:44 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>
#include <vector>
#include <algorithm>
#include "Span.hpp"

Span::Span(void) : _total(0), _size(0)
{
	return ;
}

Span::Span(unsigned int n) : _total(0), _size(n)
{
	return ;
}

Span::Span(Span const & span)
{
	*this = span;
	return ;
}

Span::~Span(void)
{
	return ;
}

Span &						Span::operator=(Span const & span)
{
	this->_tab = span._tab;
	this->_total = span._total;
	this->_size = span._size;
	return (*this);
}

void						Span::addNumber(int n)
{
	if (this->_total < this->_size) {
		this->_tab.push_back(n);
		this->_total++;
		std::sort(this->_tab.begin(), this->_tab.end());
	} else
		throw std::out_of_range("Out of range");
}

void						Span::addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end)
{
	std::vector<int>::const_iterator		it;
	std::vector<int>::const_iterator		ite = end;

	for (it = begin ; it != ite ; ++it) {
		this->_tab.push_back(*it);
		this->_total++;
	}
	std::sort(this->_tab.begin(), this->_tab.end());
}

int							Span::longestSpan(void) const
{
	if (this->_total <= 1)
		throw std::out_of_range("No Span To Find");
	int		max = *std::max_element(this->_tab.begin(), this->_tab.end());
	int		min = *std::min_element(this->_tab.begin(), this->_tab.end());

	return (max - min);
}

int							Span::shortestSpan(void) const
{
	if (this->_total <= 1)
		throw std::out_of_range("No Span To Find");
	std::vector<int>::const_iterator		it;
	std::vector<int>::const_iterator		ite = this->_tab.end();
	int										shortest = *std::max_element(this->_tab.begin(), this->_tab.end());
	int										tmp = 0;

	for (it = this->_tab.begin() ; it != ite - 1 ; ++it) {
		tmp = *(it + 1) - *it;
		if (tmp != 0 && tmp < shortest)
			shortest = tmp;
	}
	return (shortest);
}
