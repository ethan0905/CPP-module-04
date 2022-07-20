/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:58:31 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 18:06:50 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) {
    
    std::cout << YELLOW "WrongCat:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal( type ){
    
    std::cout << YELLOW "WrongCat:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

WrongCat::~WrongCat( void ) {

    std::cout << YELLOW "WrongCat:: " RED "Destructor called" END << std::endl;

    return ;
}

void    WrongCat::makeSound( void ) const {

    std::cout << WHITE "Hey, i am a Wrong-Cat. Because wrong cats are super cool." END << std::endl;
    
    return ;
}

WrongCat     &WrongCat::operator=( WrongCat const &rhs ) {

    std::cout << YELLOW "WrongCat:: Copy assignement operator called" END << std::endl;
    this->WrongAnimal::operator=(rhs);
    
    return (*this);
}