/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:29:05 by omartela          #+#    #+#             */
/*   Updated: 2025/02/04 23:29:07 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal& other)
{
    if (this != &other)
        *this = other;
}

Animal& Animal::operator=(const Animal& other)
{
    this->_type = other._type;
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::setType(std::string type)
{
    this->_type = type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makes a sound" << std::endl;
}