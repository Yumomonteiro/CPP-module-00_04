/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:57 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/07 12:21:01 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Orthodox Canonical Form
Fixed::Fixed(){
        _fixedNumber = 0;
        std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( int num ){
        std::cout << num << std::endl;
}

Fixed::Fixed( const Fixed& copy ){
        std::cout << "Copy constructor called" << std::endl;
        *this = copy;
}

Fixed& Fixed::operator=( const Fixed& obj ){
	std::cout << "Copy assignment operator called" << std::endl;
	this->setRawBits(obj.getRawBits());
	return (*this);
}

Fixed::~Fixed(){
        std::cout << "Destructor called" << std::endl;
}


// Member functions

int Fixed::getRawBits( void ) const{
        std::cout << "getRawBits member function called" << std::endl;
        return (_fixedNumber);
}
void Fixed::setRawBits( int const raw ){
        this->_fixedNumber = raw;
}