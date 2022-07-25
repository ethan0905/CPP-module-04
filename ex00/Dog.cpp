/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:01:10 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:33:38 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) {
    
    std::cout << MAGENTA "Dog:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Dog::Dog( std::string type ) : Animal( type ){
    
    std::cout << MAGENTA "Dog:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Dog::Dog( Dog const & rhs ) {
    
    std::cout << MAGENTA "Dog:: " GREEN "Copy constructor called" END << std::endl;
    *this = rhs;
    
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
