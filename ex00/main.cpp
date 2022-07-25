/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:19:36 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:28:19 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* dog = new Dog();
    const Animal* cat = new Cat();
    const WrongAnimal* wrong = new WrongCat();

    std::cout << "Dog type is : [" << dog->getType() << "]" << std::endl;
    std::cout << "Cat type is : [" << cat->getType() << "]" << std::endl;

    cat->makeSound(); //will output the cat sound!
    dog->makeSound();
    meta->makeSound();
    wrong->makeSound(); //will output wrong-animal sound instead of actual wrongcat sound

    delete meta;
    delete dog;
    delete cat;
    delete wrong;

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

	// system("leaks Polymorphism");

    return (0);
}
