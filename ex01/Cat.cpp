/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:59:45 by esafar            #+#    #+#             */
/*   Updated: 2022/07/21 17:12:27 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) {
    
    this->_brain = new Brain();
    std::cout << YELLOW "Cat:: " GREEN "Default constructor called" END << std::endl;
    this->_type_ = "cat_default";

    return ;
}

Cat::Cat( std::string type ) : Animal( type ){
    
    std::cout << YELLOW "Cat:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Cat::~Cat( void ) {

    std::cout << YELLOW "Cat:: " RED "Destructor called" END << std::endl;

    delete this->_brain;
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
