/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 14:37:48 by yude-oli          #+#    #+#             */
/*   Updated: 2024/12/07 11:42:41 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class   Fixed{

	private:
		
		int     _fixedNumber;
		static const int _bit = 8;

	public:

		Fixed();	
		Fixed( int num );
                Fixed( const Fixed& copy );
		Fixed &operator=( const Fixed& obj );		
	      	~Fixed();
	       int getRawBits( void ) const;
	       void setRawBits( int const raw );       
};

#endif