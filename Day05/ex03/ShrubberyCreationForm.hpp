/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:44:30 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 14:51:04 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <string>
#include "Form.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public AForm
{
	private:
		std::string				_target;

		ShrubberyCreationForm(void);

	public:
		ShrubberyCreationForm(std::string const & target);
		ShrubberyCreationForm(ShrubberyCreationForm const & f);
		virtual ~ShrubberyCreationForm(void);

		ShrubberyCreationForm &	operator=(ShrubberyCreationForm const & f);
		virtual void			execute(Bureaucrat const & executor) const;
};

#include "Bureaucrat.hpp"

#endif
