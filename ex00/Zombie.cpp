/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:52:29 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 19:12:12 by yasinbestri      ###   ########.fr       */
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

std::string	Zombie::getName() const
{
	return this->name;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}

Zombie*	newZombie(std::string name)
{
	new Zombie;
	Zombie::setName(name);	



}