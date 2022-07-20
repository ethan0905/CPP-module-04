/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:52:34 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 17:57:28 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) {
    
    std::cout << WHITE "WrongAnimal:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

WrongAnimal::WrongAnimal( std::string type ) : _type_(type) {
    
    std::cout << WHITE "WrongAnimal:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

WrongAnimal::~WrongAnimal( void ) {

    std::cout << WHITE "WrongAnimal:: " RED "Destructor called" END << std::endl;

    return ;
}

std::string const &WrongAnimal::getType( void ) const {

    return (this->_type_);
}


void    WrongAnimal::makeSound( void ) const {
    
    std::cout << WHITE "Hey, i am a Wrong-Animal. Because actually, there is right and wrong animal in this world." END << std::endl;
    return ;
}

WrongAnimal   &WrongAnimal::operator=( WrongAnimal const &rhs ) {

    std::cout << WHITE "WrongAnimal:: Copy assignement operator called" END << std::endl;
    this->_type_ = rhs.getType();

    return (*this);
}