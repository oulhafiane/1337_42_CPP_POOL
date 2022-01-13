/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/29 10:23:31 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/29 15:09:49 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const & intern)
{
	*this = intern;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern &						Intern::operator=(Intern const & intern)
{
	(void)intern;
	return (*this);
}

static void						toLowerReplaceSpace(std::string & str)
{
	int				i = 0;
	size_t			found;

	while (str[i] != '\0') {
		str[i] = (str[i] > 64 && str[i] < 91) ? str[i] + 32 : str[i];	
		i++;
	}
	found = str.find(" ");
	while (found != std::string::npos) {
		str.erase(found, 1);
		found = str.find(" ");
	}
	found = str.find("\t");
	while (found != std::string::npos) {
		str.erase(found, 1);
		found = str.find("\t");
	}
}

AForm *							Intern::makeForm(std::string const & name, std::string const & target) const
{
	int				i;
	size_t			found;
	std::string		copy(name);
	std::string		names[3] = {"shrubberycreationform", "robotomyrequestform", "presidentialpardonform"};
	AForm			**forms = new AForm*[3];
	AForm			*chosenForm = NULL;
	
   	forms[0] = new ShrubberyCreationForm(target);
	forms[1] = new RobotomyRequestForm(target);
	forms[2] = new PresidentialPardonForm(target);
	toLowerReplaceSpace(copy);
	for (i=0;i<3;i++) {
		found = names[i].find(copy);
		if (found != std::string::npos)
			chosenForm = forms[i];
		else
			delete forms[i];
	}
	delete [] forms;
	if (chosenForm != NULL)
		return (chosenForm);
	else
		throw AForm::FormNotFoundException();
}
