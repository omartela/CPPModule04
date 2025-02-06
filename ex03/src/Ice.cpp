/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:34:25 by omartela          #+#    #+#             */
/*   Updated: 2025/02/06 13:34:26 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice &copy) : AMateria(copy) {}

Ice & Ice::operator=(const Ice &src)
{
    if (this != &src)
    {
        AMateria::operator=(src);
    }
    return *this;
}

Ice::~Ice() {}

AMateria* Ice::clone() const
{
    return new Ice();
}