/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 19:38:18 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 09:36:34 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("default", 1, 1)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const & target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & f) : AForm(f), _target(f._target)
{
	return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	return ;
}

RobotomyRequestForm &			RobotomyRequestForm::operator=(RobotomyRequestForm const & f)
{
	AForm::operator=(f);
	this->_target = f._target;
	return (*this);
}

void							RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	try {
		this->AForm::execute(executor);
		std::cout << "FzzzZzzzzZZZzzzZZZZzzZZZZz..." << std::endl;
		std::cout << this->_target << " has been robotomized successfully 50\% of the time." << std::endl;
	} catch (AForm::FormNotSignedException const & e) {
		std::cout << this->_target << " robotization failure." << std::endl;
		throw AForm::FormNotSignedException();
	} catch (AForm::GradeTooLowException const & e) {
		std::cout << this->_target << " robotization failure." << std::endl;
		throw AForm::GradeTooLowException();
	} catch (std::exception const & e) {
		std::cout << this->_target << " robotization failure." << std::endl;
		throw std::exception();
	}
}
