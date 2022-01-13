/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 15:52:47 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/05 15:57:36 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
		typedef typename std::stack<T, Container>::container_type::const_iterator	iterator;
		MutantStack(void) { return ; }
		MutantStack(MutantStack const & mutan) : std::stack<T, Container>(mutan) { return ; }
		virtual ~MutantStack(void) { return ; };

		MutantStack &	operator=(MutantStack const & mutan)
		{
			std::stack<T, Container>::operator=(mutan);
		}

		iterator		begin(void) const
		{
			return (this->c.begin());
		}

		iterator		end(void) const
		{
			return (this->c.end());
		}
};

#endif
