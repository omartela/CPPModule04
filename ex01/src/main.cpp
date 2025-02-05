/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:21:52 by omartela          #+#    #+#             */
/*   Updated: 2025/02/05 17:21:53 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"
#include "../inc/Animal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"

int main()
{

    Animal** array = new Animal*[4];
    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            array[i] = new Dog();
        else
            array[i] = new Cat();
    }
    for (int i = 0; i < 4; i++)
    {
        delete array[i];
    }
    delete[] array;

    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;//should not create a leak
    delete i;
    return 0;
}
