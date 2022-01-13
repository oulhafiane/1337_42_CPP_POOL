/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:38:30 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 09:34:42 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm : public AForm
{
	private:
		std::string				_target;

		PresidentialPardonForm(void);
	
	public:
		PresidentialPardonForm(std::string const & target);
		PresidentialPardonForm(PresidentialPardonForm const & f);
		virtual ~PresidentialPardonForm(void);

		PresidentialPardonForm &	operator=(PresidentialPardonForm const & f);
		virtual void				execute(Bureaucrat const & executor) const;
};

#include "Bureaucrat.hpp"

#endif
