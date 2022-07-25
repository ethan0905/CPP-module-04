/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:52:31 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:35:31 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define END "\033[0m"

#define CYAN "\033[1;36m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define WHITE "\033[1;37m"

#define LIGHTDARK "\033[1;90m"

class WrongAnimal {
    
    public:
        WrongAnimal( void );
        WrongAnimal( std::string type );
        WrongAnimal( WrongAnimal const & rhs );
        virtual ~WrongAnimal( void );
        
        std::string const &getType( void ) const;
        void    makeSound( void ) const;

        WrongAnimal  &operator=( WrongAnimal const &rhs );
        
    protected:
        std::string _type_;
        
    private:

};

std::ostream    &operator<<( std::ostream &o, WrongAnimal const  &rhs);

#endif