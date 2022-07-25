/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 17:58:55 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:36:28 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
    
    public:
        WrongCat( void );
        WrongCat( std::string type );
        WrongCat( WrongCat const & rhs );
        ~WrongCat( void );
        
        // std::string getType( void )const;
        void    makeSound( void )const;

        WrongCat     &operator=( WrongCat const &rhs );
    private:

};

#endif