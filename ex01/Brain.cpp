/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:10:22 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 18:15:21 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    
    std::cout << GREY "Brain:: " GREEN "Default constructor called" END << std::endl;

    return ;
}

Brain::~Brain( void ) {

    std::cout << GREY "Brain:: " RED "Destructor called" END << std::endl;

    return ;
}

// Brain   &Brain::operator=( Brain const &rhs ) {

//     std::cout << GREY "Brain:: Copy assignement operator called" END << std::endl;
//     this->_type_ = rhs.getType();

//     return (*this);
// }