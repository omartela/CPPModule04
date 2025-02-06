/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omartela <omartela@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 16:59:10 by omartela          #+#    #+#             */
/*   Updated: 2025/02/05 16:59:11 by omartela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain created" << std::endl;
}

Brain::Brain(const Brain &cpy)
{
    std::cout << "Brain copied" << std::endl;
    if (this != &cpy)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = cpy.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &rhs)
{
    std::cout << "Brain assigned" << std::endl;
    if (this != &rhs)
    {
        for (int i = 0; i < 100; i++)
            ideas[i] = rhs.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain destroyed" << std::endl;
}
