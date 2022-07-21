/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:36 by esafar            #+#    #+#             */
/*   Updated: 2022/07/21 17:25:58 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NB_ANIMALS 10

int main()
{
    const Animal    *animal[NB_ANIMALS];

    // Brain   *brain;

    //malloc each animal of the animal tab
    for (int i = 0; i < NB_ANIMALS; i++)
    {
        if ((i % 2) == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        std::cout << "Animal ["<< i << "] has been created with ["<< animal[i]->getType() << "] type." << std::endl;
    }

    //free every animal of the tab
    for (int j = 0; j < NB_ANIMALS; j++)
    {
        delete animal[j];
        std::cout << "Animal ["<< j << "] has been destroyed." << std::endl;
    }

    return (0);
}
