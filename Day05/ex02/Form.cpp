/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:03:14 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 20:10:59 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

AForm::AForm(void) : _grade_sign(1), _grade_execute(1)
{
	return ;
}

AForm::AForm(std::string const & name, int grade_sign, int grade_execute) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	if (this->_grade_sign < 1 || this->_grade_execute < 1)
		throw AForm::GradeTooHighException();
	else if (this->_grade_sign > 150 || this->_grade_execute > 150)
		throw AForm::GradeTooLowException();
	return ;
}

AForm::AForm(AForm const & f) : _name(f._name), _signed(f._signed), _grade_sign(f._grade_sign), _grade_execute(f._grade_execute)
{
	return ;
}

AForm::~AForm(void)
{
	return ;
}

AForm &							AForm::operator=(AForm const & f)
{
	this->_signed = f._signed;
	return (*this);
}

std::string const &				AForm::getName(void) const
{
	return (this->_name);
}

bool							AForm::getStatus(void) const
{
	return (this->_signed);
}

int								AForm::getGradeSign(void) const
{
	return (this->_grade_sign);
}

int								AForm::getGradeExecute(void) const
{
	return (this->_grade_execute);
}

void							AForm::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->_grade_sign)
		throw AForm::GradeTooLowException();
	this->_signed = true;
}

void							AForm::execute(Bureaucrat const & executor) const
{
	if (this->_signed == false)
		throw AForm::FormNotSignedException();
	else if (executor.getGrade() > this->_grade_execute)
		throw AForm::GradeTooLowException();
}

const char *					AForm::GradeTooHighException::what(void) const throw()
{
	return ("Invalid grade, grade too high.");
}

const char *					AForm::GradeTooLowException::what(void) const throw()
{
	return ("Invalid grade, grade too low.");
}

const char *					AForm::FormNotSignedException::what(void) const throw()
{
	return ("Cannot execute a form not signed.");
}

std::ostream &					operator<<(std::ostream & o, AForm const & f)
{
	o << "Form: " << f.getName() << "," << (f.getStatus() ? " signed" : " not signed") << ", grade sign " << f.getGradeSign() << ", grade execute " << f.getGradeExecute() << "." << std::endl;
	return (o);
}
