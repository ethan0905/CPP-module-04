/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:36 by esafar            #+#    #+#             */
/*   Updated: 2022/07/22 14:22:57 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#define NB_ANIMALS 10

int main()
{
    // Ne peut pas etre instanciee car Animal est une classe abstraite
    // Pour etre utilisee, elle doit donc etre derivee
    const Animal    *dog = new Dog();
    const Animal    *cat = new Cat();
    // const Animal    dog = new Dog();
    // const Animal    cat = new Cat();

    Brain   *brain;

    std::cout << "Animal ["<< "0" << "] has been created with ["<< dog->getType() << "] type." << std::endl;
    std::cout << "Animal ["<< "1" << "] has been created with ["<< cat->getType() << "] type." << std::endl;

    std::cout << "DEEP COPY!!" << std::endl;
	std::cout << "-----------------------------" << std::endl;


    brain = dog->getBrain();

    brain->_ideas[0] = "idee 1";
    brain->_ideas[1] = "idee 2";
    brain->_ideas[2] = "idee 3";
    brain->_ideas[3] = "idee 4";

    std::cout << "Dog ideas are :" << std::endl;
    for (int z = 0; z < 4; z++)
        std::cout << ">>>" << dog->getBrain()->_ideas[z] << std::endl;

    std::cout << "-----------------------------" << std::endl;


    //free every animal of the tab
    delete dog;
    std::cout << "Dog has been destroyed." << std::endl;
    delete cat;
    std::cout << "Cat has been destroyed." << std::endl;
    
    return (0);
}
