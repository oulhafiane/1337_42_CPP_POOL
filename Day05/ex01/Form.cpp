/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:03:14 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 15:12:25 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(void) : _grade_sign(1), _grade_execute(1)
{
	return ;
}

Form::Form(std::string const & name, int grade_sign, int grade_execute) : _name(name), _signed(false), _grade_sign(grade_sign), _grade_execute(grade_execute)
{
	if (this->_grade_sign < 1 || this->_grade_execute < 1)
		throw Form::GradeTooHighException();
	else if (this->_grade_sign > 150 || this->_grade_execute > 150)
		throw Form::GradeTooLowException();
	return ;
}

Form::Form(Form const & f) : _name(f._name), _signed(f._signed), _grade_sign(f._grade_sign), _grade_execute(f._grade_execute)
{
	return ;
}

Form::~Form(void)
{
	return ;
}

Form &							Form::operator=(Form const & f)
{
	this->_signed = f._signed;
	return (*this);
}

std::string const &				Form::getName(void) const
{
	return (this->_name);
}

bool							Form::getStatus(void) const
{
	return (this->_signed);
}

int								Form::getGradeSign(void) const
{
	return (this->_grade_sign);
}

int								Form::getGradeExecute(void) const
{
	return (this->_grade_execute);
}

void							Form::beSigned(Bureaucrat const & b)
{
	if (b.getGrade() > this->_grade_sign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

const char *					Form::GradeTooHighException::what(void) const throw()
{
	return ("Invalid grade, grade too high.");
}

const char *					Form::GradeTooLowException::what(void) const throw()
{
	return ("Invalid grade, grade too low.");
}

std::ostream &					operator<<(std::ostream & o, Form const & f)
{
	o << "Form: " << f.getName() << "," << (f.getStatus() ? " signed" : " not signed") << ", grade sign " << f.getGradeSign() << ", grade execute " << f.getGradeExecute() << "." << std::endl;
	return (o);
}
