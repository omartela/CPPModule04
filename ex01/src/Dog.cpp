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
#include "../inc/Brain.hpp"

Dog::Dog()
{
    std::cout << "Dog constructor called" << std::endl;
    setType("Dog");
    brain = new Brain();
}

Dog::Dog(Dog const & src) : Animal(src) 
{
    if (this != &src)
    {
        brain = new Brain();
        *brain = *(src.brain);
    }
}

Dog & Dog::operator=(Dog const &src)
{
    if (this != &src)
    {
        Animal::operator=(src);
        *brain = *(src.brain);
    }
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Woof woof" << std::endl;
}
