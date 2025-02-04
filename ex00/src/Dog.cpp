/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:29:27 by omartela          #+#    #+#             */
/*   Updated: 2025/02/04 23:29:28 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
    setType("Dog");
}

Dog::Dog(Dog const & src)
{
    *this = src;
}

Dog & Dog::operator=(Dog const & src)
{
    setType(src.getType());
    return *this;
}

Dog::~Dog()
{
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}
