/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 15:00:54 by esafar            #+#    #+#             */
/*   Updated: 2022/07/22 14:47:21 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal {
    
    public:
        Dog( void );
        Dog( std::string type );
        Dog( Dog const & rhs );
        ~Dog( void );
        
        void    makeSound( void )const;
        virtual Brain   *getBrain( void )const;

        Dog     &operator=( Dog const &rhs );

    private:
        Brain*  _brain;

};

#endif