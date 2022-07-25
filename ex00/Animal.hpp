/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 14:52:42 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:31:16 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

#define CYAN "\033[1;36m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define WHITE "\033[1;37m"

#define LIGHTDARK "\033[1;90m"

class Animal {
    
    public:
        Animal( void );
        Animal( std::string type );
        Animal( Animal const & rhs );
        virtual ~Animal( void );
        
        std::string const &getType( void ) const;
        virtual void    makeSound( void ) const;

        Animal  &operator=( Animal const &rhs );
        
    protected:
        std::string _type_;
        
    private:

};

std::ostream    &operator<<( std::ostream &o, Animal const  &rhs);

#endif