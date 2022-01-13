/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 09:46:20 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/28 12:20:15 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <stdexcept>
#include <string>

class Bureaucrat
{
	private:
		std::string	const		_name;
		int						_grade;

		Bureaucrat(void);

	public:
		Bureaucrat(std::string const & name, int grade);
		Bureaucrat(Bureaucrat const & b);
		virtual ~Bureaucrat(void);

		Bureaucrat &			operator=(Bureaucrat const & b);
		std::string const &		getName(void) const;
		int						getGrade(void) const;
		void					increment(void);
		void					decrement(void);

	class GradeTooHighException : public std::exception
	{
		public:
			virtual const char*	what(void) const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
			virtual const char*	what(void) const throw();
	};
};

std::ostream &					operator<<(std::ostream & o, Bureaucrat const & b);

#endif
