/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:52:29 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 18:29:08 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{
	return;
}

Zombie::~Zombie()
{
	return;
}

void	Zombie::announce()
{
	std::cout << this->name; 

}

Zombie*	newZombie(std::string name)
{
	new Zombie;
	


}