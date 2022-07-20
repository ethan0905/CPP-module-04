/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:36 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 17:42:03 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "Dog type is : [" << j->getType() << "]" << std::endl;
    std::cout << "Cat type is : [" << i->getType() << "]" << std::endl;

    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();

    delete meta;
    delete j;
    delete i;

    std::cout << std::endl << std::endl;

    const Animal* meta2 = new Animal("A");
    const Animal* j2 = new Dog("B");
    const Animal* i2 = new Cat("C");

    std::cout << "Animal type is : [" << meta2->getType() << "]" << std::endl;
    std::cout << "Dog type is : [" << j2->getType() << "]" << std::endl;
    std::cout << "Cat type is : [" << i2->getType() << "]" << std::endl;

    delete meta2;
    delete j2;
    delete i2;

    return (0);
}
