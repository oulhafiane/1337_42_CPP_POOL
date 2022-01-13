/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:08:48 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/22 10:41:54 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _pFixe(0)
{
	std::cout << "Default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(int const n)
{
	int		i, shift = 1;

	std::cout << "Int constructor called" << std::endl;
	for (i=0;i<Fixed::_nbFract;i++)
		shift *= 2; 
	this->_pFixe = n * shift;
}

Fixed::Fixed(float const n)
{
	int		i, shift = 1;

	std::cout << "Float constructor called" << std::endl;
	for (i=0;i<Fixed::_nbFract;i++)
		shift *= 2;
	this->_pFixe = roundf(n * shift);
}

Fixed::Fixed(Fixed const & fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;

	return;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed&			Fixed::operator=(Fixed const & fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_pFixe = fixed._pFixe;

	return (*this);
}

int				Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_pFixe);
}

void			Fixed::setRawBits(int const raw)
{
	this->_pFixe = raw;
}

float			Fixed::toFloat(void) const
{
	int		i, shift = 1;

	for (i=0;i<Fixed::_nbFract;i++)
		shift *= 2;
	return ((float)this->_pFixe / shift);	
}

int				Fixed::toInt(void) const
{
	int		i, shift = 1;

	for (i=0;i<Fixed::_nbFract;i++)
		shift *= 2;
	return (this->_pFixe / shift);
}

int		Fixed::_nbFract = 8;

std::ostream &	operator<<(std::ostream &o, Fixed const & fixed)
{
	o << fixed.toFloat();

	return (o);
}
