/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:10:25 by esafar            #+#    #+#             */
/*   Updated: 2022/07/20 18:15:01 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

#define GREY "\033[1;90m"

class Brain {
    
    public:
        Brain( void );
        Brain( std::string type );
        virtual ~Brain( void );

        Brain  &operator=( Brain const &rhs );
        
    private:
        std::string _ideas[100];
};

std::ostream    &operator<<( std::ostream &o, Brain const  &rhs);

#endif