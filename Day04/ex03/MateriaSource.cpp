/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zoulhafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:55:49 by zoulhafi          #+#    #+#             */
/*   Updated: 2021/10/26 20:43:44 by zoulhafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : _materias(new AMateria*[4])
{
	int		i;

	for (i=0;i<4;i++) {
		this->_materias[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(MateriaSource const & materia) : _materias(new AMateria*[4])
{
	*this = materia;

	return ;
}

MateriaSource::~MateriaSource(void)
{
	int		i;

	for (i=0;i<4;i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
	}
	delete [] this->_materias;
	return ;
}

MateriaSource &					MateriaSource::operator=(MateriaSource const & mt)
{
	int		i;

	for (i=0;i<4;i++) {
		if (this->_materias[i] != NULL)
			delete this->_materias[i];
		if (mt._materias[i] != NULL)
			this->_materias[i] = mt._materias[i]->clone();
		else
			this->_materias[i] = NULL;
	}

	return (*this);
}

void							MateriaSource::learnMateria(AMateria * m)
{
	int		i = 0;
	if (m == NULL)
		return ;
	while (i < 4 && this->_materias[i] != NULL)
		i++;
	if (i >= 4)
		return ;
	this->_materias[i] = m->clone();
}

AMateria *						MateriaSource::createMateria(std::string const & type)
{
	int		i;

	for (i=0;i<4;i++) {
		if (this->_materias[i] != NULL && this->_materias[i]->getType().compare(type) == 0) {
			return (this->_materias[i]->clone());
		}
	}
	return (0);
}
