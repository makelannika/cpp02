/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:15:39 by amakela           #+#    #+#             */
/*   Updated: 2024/08/18 22:16:08 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int                 point;
        static const int    bits;

    public:
        Fixed();
        ~Fixed();

        Fixed( const Fixed& obj );
        Fixed& operator=( const Fixed& obj );

        int     getRawBits() const;
        void    setRawBits( int const raw );
};

#endif
