/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 11:10:17 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/11/03 15:00:02 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <stdexcept>

template <typename T>
class Array
{
	private:
		T				*_elements;
		unsigned int	_size;

	public:
		Array(void) : _elements(NULL), _size(0) { return ;}

		Array(unsigned int n) : _elements(new T[n]()), _size(n) { return ;}

		Array(Array const & arr) : _elements(NULL), _size(0) { *this = arr; return ; }

		virtual ~Array(void)
		{
			if (this->_elements != NULL)
				delete [] this->_elements;
		}

		unsigned int	size(void) const { return (this->_size); }

		Array &			operator=(Array const & arr)
		{
			unsigned int		i;

			this->_size = arr._size;
			if (this->_elements != NULL)
				delete [] this->_elements;
			this->_elements = new T[arr._size];
			for (i=0;i<arr._size;i++) {
				this->_elements[i] = arr._elements[i];
			}
			return (*this);
		}

		T &				operator[](unsigned int index)
		{
			if (index >=0 && index < this->_size)
				return (this->_elements[index]);
			else
				throw std::exception();
		}
};

#endif
