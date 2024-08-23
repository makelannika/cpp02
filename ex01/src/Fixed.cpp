/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amakela <amakela@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 22:37:30 by amakela           #+#    #+#             */
/*   Updated: 2024/08/23 22:15:28 by amakela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Fixed.hpp"

const int Fixed::frac_bits = 8;

Fixed::Fixed() : value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int value ) {
    std::cout << "Int constructor called" << std::endl;
    this -> value = value << this -> frac_bits;
}

Fixed::Fixed( const float value ) {
    std::cout << "Float constructor called" << std::endl;
    this -> value = roundf(value * (1 << this -> frac_bits));
}

Fixed::Fixed(const Fixed& obj) {
    std::cout << "Copy constructor called" << std::endl;
    operator=(obj);
}

Fixed& Fixed::operator=(const Fixed& obj) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obj)
        return *this;
    value = obj.getRawBits();
    return *this;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this -> value);
}

void    Fixed::setRawBits(int const raw) {
    std::cout << "setRawBits member function called" << std::endl;
    this -> value = raw;
}

int Fixed::toInt( void ) const {
    return (this -> value >> this -> frac_bits);
}

float   Fixed::toFloat( void ) const {
    return (this -> value / (float)(1 << this -> frac_bits));
}

std::ostream&   operator<<(std::ostream &out, const Fixed& obj) {
    out << obj.toFloat();
    return (out);
}
