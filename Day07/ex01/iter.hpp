/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 10:45:55 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/03 11:06:59 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T * tab, size_t len, void (*func)(T const &))
{
	size_t	i;

	for (i=0;i<len;i++) {
		(*func)(tab[i]);
	}
}

template <typename T>
void	print(T const & val)
{
	std::cout << val << std::endl;
}

#endif
