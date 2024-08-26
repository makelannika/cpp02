/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 14:15:39 by amakela           #+#    #+#             */
/*   Updated: 2024/08/26 13:02:13 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
    private:
        int                 value;
        static const int    bits;

    public:
        Fixed();
        ~Fixed();

        Fixed(const Fixed& obj);

        Fixed& operator=(const Fixed& obj);

        int     getRawBits() const;
        void    setRawBits(int const raw);
};

#endif
