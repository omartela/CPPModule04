/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:29:18 by omartela          #+#    #+#             */
/*   Updated: 2025/02/04 23:29:19 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
    setType("Cat");
}

Cat::Cat(Cat const & src)
{
    *this = src;
}

Cat & Cat::operator=(Cat const & src)
{
    setType(src.getType());
    return *this;
}

Cat::~Cat()
{
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}


