/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:26:04 by omartela          #+#    #+#             */
/*   Updated: 2025/02/04 23:26:06 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
    public:
        Cat();
        Cat(Cat const & src);
        Cat & operator=(Cat const & src);
        virtual ~Cat();
        void makeSound() const;
};