/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 11:42:51 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/04 14:56:33 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <vector>

class Span
{
	private:
		std::vector<int>	_tab;
		unsigned int		_total;
		unsigned int		_size;

		Span(void);

	public:
		Span(unsigned int n);
		Span(Span const & span);
		virtual ~Span(void);

		Span &				operator=(Span const & span);
		void				addNumber(int n);
		void				addNumber(std::vector<int>::const_iterator begin, std::vector<int>::const_iterator end);
		int					longestSpan(void) const;
		int					shortestSpan(void) const;
};

#endif
