/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:55:54 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 14:56:02 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	if (this->_grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (this->_grade > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const & b) : _name(b._name), _grade(b._grade)
{
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat &					Bureaucrat::operator=(Bureaucrat const & b)
{
	if (b._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (b._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = b._grade;
	
	return (*this);
}

std::string const &				Bureaucrat::getName(void) const
{
	return (this->_name);
}

int								Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void							Bureaucrat::increment(void)
{
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void							Bureaucrat::decrement(void)
{
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

void							Bureaucrat::signForm(Form & f)
{
	try {
		f.beSigned(*this);
		std::cout << this->_name << " signs " << f.getName() << std::endl;
	} catch (Form::GradeTooLowException const & e) {
		std::cout << this->_name << " cannot sign " << f.getName() << " because " << e.what() << std::endl;	
	} catch (std::exception const & e) {
		std::cout << this->_name << " cannot sign " << f.getName() << " because " << e.what() << std::endl;	
	}
}

const char*						Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Invalid grade, grade too high.");
}

const char*						Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Invalid grade, grade too low.");
}

std::ostream &					operator<<(std::ostream & o, Bureaucrat const & b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return (o);
}
