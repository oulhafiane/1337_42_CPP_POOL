/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:08:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/22 16:51:30 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int						_pFixe;
		static int				_nbFract;
	public:
		Fixed(void);
		Fixed(int const n);
		Fixed(float const n);
		Fixed(Fixed const & fixed);
		~Fixed(void);
		
		Fixed&					operator=(Fixed const & fixed);
		bool					operator>(Fixed const & fixed) const;
		bool					operator<(Fixed const & fixed) const;
		bool					operator>=(Fixed const & fixed) const;
		bool					operator<=(Fixed const & fixed) const;
		bool					operator==(Fixed const & fixed) const;
		bool					operator!=(Fixed const & fixed) const;
		Fixed					operator+(Fixed const & fixed) const;
		Fixed					operator-(Fixed const & fixed) const;
		Fixed					operator*(Fixed const & fixed) const;
		Fixed					operator/(Fixed const & fixed) const;
		Fixed&					operator++(void);
		Fixed&					operator--(void);
		Fixed					operator++(int dummy);
		Fixed					operator--(int dummy);
		int						getRawBits(void) const;
		void					setRawBits(int const raw);
		float					toFloat(void) const;
		int						toInt(void) const;
		static Fixed&			min(Fixed& a, Fixed& b);
		static Fixed const &	min(Fixed const & a, Fixed const & b);
		static Fixed&			max(Fixed& a, Fixed& b);
		static Fixed const &	max(Fixed const & a, Fixed const & b);
};

std::ostream &	operator<<(std::ostream &o, Fixed const & fixed);

#endif
