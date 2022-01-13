/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:08:48 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/22 16:51:48 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cmath>
#include "Fixed.hpp"

Fixed::Fixed(void) : _pFixe(0)
{
	return ;
}

Fixed::Fixed(int const n)
{
	int		i, shift = 1;

	for (i=0;i<Fixed::_nbFract;i++)
		shift *= 2; 
	this->_pFixe = n * shift;
}

Fixed::Fixed(float const n)
{
	int		i, shift = 1;

	for (i=0;i<Fixed::_nbFract;i++)
		shift *= 2;
	this->_pFixe = roundf(n * shift);
}

Fixed::Fixed(Fixed const & fixed)
{
	*this = fixed;

	return;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed&			Fixed::operator=(Fixed const & fixed)
{
	this->_pFixe = fixed._pFixe;

	return (*this);
}

bool			Fixed::operator>(Fixed const & fixed) const
{
	if (this->_pFixe > fixed._pFixe)
		return (true);
	else
		return (false);
}

bool			Fixed::operator>=(Fixed const & fixed) const
{
	if (this->_pFixe >= fixed._pFixe)
		return (true);
	else
		return (false);
}

bool			Fixed::operator<(Fixed const & fixed) const
{
	if (this->_pFixe < fixed._pFixe)
		return (true);
	else
		return (false);
}

bool			Fixed::operator<=(Fixed const & fixed) const
{
	if (this->_pFixe <= fixed._pFixe)
		return (true);
	else
		return (false);
}

bool			Fixed::operator==(Fixed const & fixed) const
{
	if (this->_pFixe == fixed._pFixe)
		return (true);
	else
		return (false);
}

bool			Fixed::operator!=(Fixed const & fixed) const
{
	if (this->_pFixe != fixed._pFixe)
		return (true);
	else
		return (false);
}

Fixed			Fixed::operator+(Fixed const & fixed) const
{
	Fixed newFixed;
	
	newFixed.setRawBits(this->_pFixe + fixed._pFixe);
	return (newFixed);
}

Fixed			Fixed::operator-(Fixed const & fixed) const
{
	Fixed newFixed;
	
	newFixed.setRawBits(this->_pFixe - fixed._pFixe);
	return (newFixed);
}

Fixed			Fixed::operator*(Fixed const & fixed) const
{
	Fixed newFixed(this->toFloat() * fixed.toFloat());
	
	return (newFixed);
}

Fixed			Fixed::operator/(Fixed const & fixed) const
{
	Fixed newFixed(this->toFloat() / fixed.toFloat());

	return (newFixed);
}

Fixed&			Fixed::operator++(void)
{
	this->_pFixe += 1;
	return (*this);
}

Fixed&			Fixed::operator--(void)
{
	this->_pFixe -= 1; 
	return (*this);
}

Fixed			Fixed::operator++(int dummy)
{
	Fixed	tmp(*this);

	(void)dummy;
	this->_pFixe += 1;
	return (tmp);
}

Fixed			Fixed::operator--(int dummy)
{
	Fixed	tmp(*this);

	(void)dummy;
	this->_pFixe -= 1; 
	return (tmp);
}

int				Fixed::getRawBits(void) const
{
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

Fixed&			Fixed::min(Fixed& a, Fixed& b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed const &	Fixed::min(Fixed const & a, Fixed const & b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed&			Fixed::max(Fixed& a, Fixed& b)
{
	if (a >= b)
		return (a);
	else
		return (b);

}

Fixed const &	Fixed::max(Fixed const & a, Fixed const & b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

int		Fixed::_nbFract = 8;

std::ostream &	operator<<(std::ostream &o, Fixed const & fixed)
{
	o << fixed.toFloat();

	return (o);
}
