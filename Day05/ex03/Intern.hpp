/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 09:49:26 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 11:07:15 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>

class AForm;

class Intern
{
	public:
		Intern(void);
		Intern(Intern const & intern);
		virtual ~Intern(void);

		Intern &				operator=(Intern const & intern);
		AForm *					makeForm(std::string const & name, std::string const & target) const;
};

#include "Form.hpp"

#endif
