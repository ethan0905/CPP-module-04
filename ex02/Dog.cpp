/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:01:10 by esafar            #+#    #+#             */
/*   Updated: 2022/07/22 13:42:12 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
    
    this->_brain = new Brain();
    std::cout << MAGENTA "Dog:: " GREEN "Default constructor called" END << std::endl;
    this->_type_ = "dog_default";
    
    return ;
}

Dog::Dog( std::string type ) : Animal( type ){
    
    this->_brain = new Brain();
    std::cout << MAGENTA "Dog:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Dog::~Dog( void ) {

    std::cout << MAGENTA "Dog:: " RED "Destructor called" END << std::endl;
    delete this->_brain;

    return ;
}

void    Dog::makeSound( void ) const {

    std::cout << MAGENTA "Waouf waouf" END << std::endl;
    
    return ;
}

Brain   *Dog::getBrain( void ) const {

    return (this->_brain);
}

Dog     &Dog::operator=( Dog const &rhs ) {

    std::cout << MAGENTA "Dog:: Copy assignement operator called" END << std::endl;
    // this->Animal::operator=(rhs);
    this->_type_ = rhs.getType();
    *(this->_brain) = *(rhs.getBrain());
    
    return (*this);
}
