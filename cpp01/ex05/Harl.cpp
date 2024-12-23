/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuriaco <yuriaco@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 11:03:57 by yuriaco           #+#    #+#             */
/*   Updated: 2024/12/04 12:47:35 by yuriaco          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug( void )
{
	std::cout << "DEBUG: I love extra bacon on my burger!" << std::endl;
}


void Harl::info( void )
{
	std::cout << "INFO: Adding bacon costs extra, just so you know." << std::endl;
}

void Harl::warning( void )
{
	std::cout << "WARNING: I think I deserve some free bacon!" << std::endl;
}

void Harl::error( void )
{
	std::cout << "ERROR: This is unacceptable! I want to speak to the manager!" << std::endl;
}

void Harl::complain(std::string level) {
    
    void (Harl::*f)(void);
    
    if (level == "DEBUG" || level == "INFO" || level == "WARNING" || level == "ERROR")
    {
        switch (level[0]) {
        case 'D':
            f = &Harl::debug;
            break;
        case 'I':
            f = &Harl::info;
            break;
        case 'W':
            f = &Harl::warning;
            break;
        case 'E':
            f = &Harl::error;
            break;
        default:
            std::cout << "Invalid level: " << level << std::endl;
            return;
        }
        (this->*f)();
    }
        else 
            std::cout << "invalid input" << std::endl;
}
