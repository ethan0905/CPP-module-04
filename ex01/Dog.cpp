/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:01:10 by esafar            #+#    #+#             */
/*   Updated: 2022/07/21 17:12:10 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
    
    std::cout << MAGENTA "Dog:: " GREEN "Default constructor called" END << std::endl;
    this->_type_ = "dog_default";
    
    return ;
}

Dog::Dog( std::string type ) : Animal( type ){
    
    std::cout << MAGENTA "Dog:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Dog::~Dog( void ) {

    std::cout << MAGENTA "Dog:: " RED "Destructor called" END << std::endl;

    return ;
}

void    Dog::makeSound( void ) const {

    std::cout << MAGENTA "Waouf waouf" END << std::endl;
    
    return ;
}

Dog     &Dog::operator=( Dog const &rhs ) {

    std::cout << MAGENTA "Dog:: Copy assignement operator called" END << std::endl;
    this->Animal::operator=(rhs);
    
    return (*this);
}
