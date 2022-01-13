/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 10:01:15 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/04 11:40:17 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

template <typename T>
int const &		easyfind(T const & lst, int num)
{
	typename T::const_iterator		it;
	typename T::const_iterator		ite = lst.end();
	
	for(it = lst.begin() ; it != ite ; ++it) {
		if (num == *it)
			return (*it);
	}
	throw std::out_of_range("Not found");
}

#endif
