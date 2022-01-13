/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:09:36 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/03 10:14:01 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T & a, T & b)
{
	T	c = a;

	a = b;
	b = c;
}

template <typename T>
T		min(T const & a, T const & b)
{
	return ( a < b ? a : b);
}

template <typename T>
T		max(T const & a, T const & b)
{
	return ( a > b ? a : b);
}

#endif
