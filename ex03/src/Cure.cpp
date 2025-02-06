/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:34:32 by omartela          #+#    #+#             */
/*   Updated: 2025/02/06 13:34:33 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure &copy) : AMateria(copy) {}

Cure & Cure::operator=(const Cure &src)
{
    if (this != &src)
    {
        AMateria::operator=(src);
    }
    return *this;
}

Cure::~Cure() {}

AMateria* Cure::clone() const
{
    return new Cure();
}
