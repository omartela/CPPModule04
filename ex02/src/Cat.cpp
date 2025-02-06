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
#include "../inc/Brain.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    setType("Cat");
    brain = new Brain();
}

Cat::Cat(Cat const & src) : Animal(src)
{
    if (this != &src)
    {
        brain = new Brain();
        *brain = *(src.brain);
    }
}

Cat & Cat::operator=(Cat const & src)
{
    if (this != &src)
    {
        Animal::operator=(src);
        *brain = *(src.brain);
    }
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Meow meow" << std::endl;
}


