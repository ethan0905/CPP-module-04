/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:10:22 by esafar            #+#    #+#             */
/*   Updated: 2022/07/21 18:45:49 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    
    std::cout << GREY "Brain:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Brain::Brain( Brain const &rhs ) {
    
    std::cout << GREY "Brain:: " GREEN "Copy constructor called" END << std::endl;

    *this = rhs;
    
    return ;
}


Brain::~Brain( void ) {

    std::cout << GREY "Brain:: " RED "Destructor called" END << std::endl;

    return ;
}

std::string const &Brain::getIdea( int i ) const {
    
	return (this->_ideas[i]);
}

Brain   &Brain::operator=( Brain const &rhs ) {

    std::cout << GREY "Brain:: Copy assignement operator called" END << std::endl;
    for (int i = 0; i < 100; i++)
        this->_ideas[i] = rhs._ideas[i];

    return (*this);
}