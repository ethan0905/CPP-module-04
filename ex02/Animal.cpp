/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:52:35 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:40:33 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
    
    std::cout << CYAN "Animal:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Animal::Animal( std::string type ) : _type_(type) {
    
    std::cout << CYAN "Animal:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Animal::Animal( Animal const & rhs ) {
    
    std::cout << CYAN "Animal:: " GREEN "Copy constructor called" END << std::endl;
    *this = rhs;
    
    return ;
}

Animal::~Animal( void ) {

    std::cout << CYAN "Animal:: " RED "Destructor called" END << std::endl;

    return ;
}

std::string const &Animal::getType( void ) const {

    return (this->_type_);
}

void    Animal::makeSound( void ) const {
    
    std::cout << CYAN "Hey, i am an animal." END << std::endl;
    return ;
}

// Brain   *Animal::getBrain( void ) const {

//     return (this->_brain);
// }


Animal   &Animal::operator=( Animal const &rhs ) {

    std::cout << CYAN "Animal:: Copy assignement operator called" END << std::endl;
    this->_type_ = rhs.getType();

    return (*this);
}