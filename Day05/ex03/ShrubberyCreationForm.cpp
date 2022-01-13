/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/28 15:56:10 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 14:50:57 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("defaut", 1, 1)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const & target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & f) : AForm(f), _target(f._target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm &				ShrubberyCreationForm::operator=(ShrubberyCreationForm const & f)
{
	AForm::operator=(f);
	this->_target = f._target;
	return (*this);
}

void								ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	this->AForm::execute(executor);
	std::ofstream	ofs(this->_target + "_shrubbery");
	ofs << "      /\\      " << std::endl;
	ofs << "     /\\*\\    " << std::endl;
	ofs << "    /\\O\\*\\  " << std::endl;
	ofs << "   /*/\\/\\/\\ " << std::endl;
	ofs << "  /\\O\\/\\*\\/\\  " << std::endl;
	ofs << " /\\*\\/\\*\\/\\/\\ " << std::endl;
	ofs << "/\\O\\/\\/*/\\/O/\\" << std::endl;
	ofs << "      ||      " << std::endl;
	ofs << "      ||      " << std::endl;
	ofs << "      ||      " << std::endl;
	ofs.close();
}
