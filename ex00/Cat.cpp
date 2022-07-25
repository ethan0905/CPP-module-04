/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:59:45 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:33:15 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
    
    std::cout << YELLOW "Cat:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Cat::Cat( std::string type ) : Animal( type ){
    
    std::cout << YELLOW "Cat:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Cat::Cat( Cat const & rhs ) {
    
    std::cout << YELLOW "Cat:: " GREEN "Copy constructor called" END << std::endl;
    *this = rhs;
    
    return ;
}

Cat::~Cat( void ) {

    std::cout << YELLOW "Cat:: " RED "Destructor called" END << std::endl;

    return ;
}

void    Cat::makeSound( void ) const {

    std::cout << YELLOW "Miaou miaou" END << std::endl;
    
    return ;
}

Cat     &Cat::operator=( Cat const &rhs ) {

    std::cout << YELLOW "Cat:: Copy assignement operator called" END << std::endl;
    this->Animal::operator=(rhs);
    
    return (*this);
}
