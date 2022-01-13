/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 13:00:54 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 15:04:07 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <stdexcept>
#include <string>
#include <iostream>

class Bureaucrat;

class Form
{
	private:
		std::string const		_name;
		bool					_signed;
		int const				_grade_sign;
		int const				_grade_execute;

		Form(void);

	public:
		Form(std::string const & name, int grade_sign, int grade_execute);
		Form(Form const & f);
		virtual ~Form(void);

		Form &					operator=(Form const & f);
		std::string const &		getName(void) const;
		bool					getStatus(void) const;
		int						getGradeSign(void) const;
		int						getGradeExecute(void) const;
		void					beSigned(Bureaucrat const & b);
	
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
};

std::ostream &					operator<<(std::ostream & o, Form const & f);

#include "Bureaucrat.hpp"

#endif
