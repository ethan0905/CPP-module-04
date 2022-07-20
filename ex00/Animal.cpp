/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:52:35 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 14:53:51 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) {
    
    std::cout << "Default constructor called" << std::endl;

    return ;
}

Animal::~Animal( void ) {

    std::cout << "Destructor called" << std::endl;

    return ;
}

