/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:36 by esafar            #+#    #+#             */
/*   Updated: 2022/07/22 17:04:07 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NB_ANIMALS 10

int main()
{
    Animal    *animal[NB_ANIMALS];

    Brain   *brain;

    //malloc each animal of the animal tab
    for (int i = 0; i < NB_ANIMALS; i++)
    {
        if ((i % 2) == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        std::cout << "Animal ["<< i << "] has been created with ["<< animal[i]->getType() << "] type." << std::endl;
    }

    std::cout << "DEEP COPY!!" << std::endl;
	std::cout << "-----------------------------" << std::endl;


    brain = animal[0]->getBrain();

    brain->_ideas[0] = "idee 1";
    brain->_ideas[1] = "idee 2";
    brain->_ideas[2] = "idee 3";
    brain->_ideas[3] = "idee 4";

    for (int z = 0; z < 4; z++)
        std::cout << animal[0]->getBrain()->_ideas[z] << std::endl;

	// std::cout << "-----------------------------" << std::endl;


    //free every animal of the tab
    for (int j = 0; j < NB_ANIMALS; j++)
    {
        delete animal[j];
        std::cout << "Animal ["<< j << "] has been destroyed." << std::endl;
    }
    
    return (0);
}
