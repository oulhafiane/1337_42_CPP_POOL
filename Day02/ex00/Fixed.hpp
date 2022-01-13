/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:08:21 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/20 15:23:20 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int			_pFixe;
		static int	_nbFract;
	public:
		Fixed(void);
		Fixed(Fixed const & fixed);
		~Fixed(void);
		
		Fixed&	operator=(Fixed const & fixed);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
