/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:37:27 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 09:13:51 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RBOTMYREQUESTFORM_HPP
# define RBOTMYREQUESTFORM_HPP

#include <string>
#include "Form.hpp"

class Bureaucrat;

class RobotomyRequestForm : public AForm
{
	private:
		std::string				_target;

		RobotomyRequestForm(void);
	
	public:
		RobotomyRequestForm(std::string const & target);
		RobotomyRequestForm(RobotomyRequestForm const & f);
		virtual ~RobotomyRequestForm(void);

		RobotomyRequestForm &	operator=(RobotomyRequestForm const & f);
		virtual void			execute(Bureaucrat const & executor) const;
};

#include "Bureaucrat.hpp"

#endif
