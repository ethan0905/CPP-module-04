/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:59:49 by esafar            #+#    #+#             */
/*   Updated: 2022/07/21 18:07:06 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal {
    
    public:
        Cat( void );
        Cat( std::string type );
        ~Cat( void );
        
        void    makeSound( void )const;
        virtual Brain   *getBrain( void )const;

        Cat     &operator=( Cat const &rhs );
        
    private:
        Brain*  _brain;

};

#endif