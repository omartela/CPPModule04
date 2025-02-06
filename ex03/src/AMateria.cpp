/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 13:29:25 by omartela          #+#    #+#             */
/*   Updated: 2025/02/06 13:29:26 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/AMateria.hpp"
#include "../inc/ICharacter.hpp"

AMateria::AMateria(std::string const &type) : _type(type) {}

AMateria::AMateria(const AMateria &copy)
{
    if (this != &copy)
        *this = copy;
}

AMateria & AMateria::operator=(const AMateria &rhs)
{
    (void)rhs;
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter &target)
{
    if (this->_type == "cure")
        std::cout << "Cure:" << "* heals " << target.getName() << "'s wounds *" << std::endl;
    else if (this->_type == "ice")
        std::cout << "Ice:" << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}