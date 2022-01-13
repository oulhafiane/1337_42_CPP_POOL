/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:00:54 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 19:44:22 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <stdexcept>
#include <string>
#include <iostream>

class Bureaucrat;

class AForm
{
	private:
		std::string const		_name;
		bool					_signed;
		int const				_grade_sign;
		int const				_grade_execute;

		AForm(void);

	public:
		AForm(std::string const & name, int grade_sign, int grade_execute);
		AForm(AForm const & f);
		virtual ~AForm(void);

		AForm &					operator=(AForm const & f);
		std::string const &		getName(void) const;
		bool					getStatus(void) const;
		int						getGradeSign(void) const;
		int						getGradeExecute(void) const;
		void					beSigned(Bureaucrat const & b);
		virtual void			execute(Bureaucrat const & executor) const = 0;
	
	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char *	what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char *	what(void) const throw();
	};

	class FormNotSignedException : public std::exception
	{
		public:
			virtual const char *	what(void) const throw();
	};
};

std::ostream &					operator<<(std::ostream & o, AForm const & f);

#include "Bureaucrat.hpp"

#endif
