/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 14:33:02 by omartela          #+#    #+#             */
/*   Updated: 2025/02/06 14:33:03 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MateriaSource.hpp"
#include "../inc/AMateria.hpp"

MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        _Materia[i] = nullptr;
}

MateriaSource::MateriaSource(MateriaSource const &src)
{
    for (int i = 0; i < 4; i++)
    {
        if (_Materia[i])
            delete _Materia[i];
        if (src._Materia[i])
            _Materia[i] = src._Materia[i]->clone();
        else
            _Materia[i] = nullptr;
    }
}

MateriaSource &MateriaSource::operator=(MateriaSource const &src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_Materia[i])
                delete _Materia[i];
            if (src._Materia[i])
                _Materia[i] = src._Materia[i]->clone();
            else
                _Materia[i] = nullptr;
        }
    }
    return *this;
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
    {
        if (_Materia[i])
            delete _Materia[i];
    }
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_Materia[i])
        {
            _Materia[i] = m;
            return;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_Materia[i] && _Materia[i]->getType() == type)
            return _Materia[i]->clone();
    }
    return 0;
}