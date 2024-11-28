/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yude-oli <yude-oli@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 18:28:21 by yude-oli          #+#    #+#             */
/*   Updated: 2024/11/26 19:14:02 by yude-oli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
        Zombie *zombie;
        zombie = newZombie("YURI");
        randomChump("Xablau");
        zombie->announce();
        
        delete zombie;
        return (0);
}