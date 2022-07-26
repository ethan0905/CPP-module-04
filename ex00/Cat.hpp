/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:59:49 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:32:36 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
    
    public:
        Cat( void );
        Cat( std::string type );
        Cat( Cat const & rhs );
        ~Cat( void );
        
        // std::string getType( void )const;
        void    makeSound( void )const;

        Cat     &operator=( Cat const &rhs );
    private:

};

#endif