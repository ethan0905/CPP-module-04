/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 18:10:25 by esafar            #+#    #+#             */
/*   Updated: 2022/07/21 18:46:06 by esafar           ###   ########.fr       */
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
        Brain( Brain const &rhs );
        virtual ~Brain( void );

        std::string const &getIdea( int i ) const;

        Brain  &operator=( Brain const &rhs );
        
        std::string _ideas[100];
    private:
    
};

std::ostream    &operator<<( std::ostream &o, Brain const  &rhs);

#endif