/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 23:28:04 by omartela          #+#    #+#             */
/*   Updated: 2025/02/04 23:28:08 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class Animal
{
    private:
        std::string _type;
    public:
        virtual ~Animal() {};
        virtual void makeSound() const = 0;
        void setType(std::string type);
        std::string getType() const;
};

