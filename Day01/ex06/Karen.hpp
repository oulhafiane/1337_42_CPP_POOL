/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:37:24 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/19 16:20:20 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>

class Karen
{
	private:
		typedef void	(Karen::*_complain)(void);
		std::string		_indexComplains[4];
		void 			(Karen::*_complains[4])(void);
		void			debug(void);
		void			info(void);
		void			warning(void);
		void			error(void);

	public:
		Karen(void);
		~Karen(void);

		int				getIndexOfComplain(std::string level);
		std::string		*getIndexComplains(void);
		_complain		*getComplains(void);
		void			complain(std::string level);
};

#endif
