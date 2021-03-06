/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:52:29 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 11:12:23 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(const std::string& name)
: name(name)
{
	std::cout << this->name << " has been brought back to life." << std::endl;
	Zombie::announce();	
	return;
}

Zombie::~Zombie()
{
	std::cout << this->name << " died a horrible death..." << std::endl;
	
	return;
}

void	Zombie::announce()
{
	std::cout << this->name;
	std::cout << " : BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::getName() const
{
	return this->name;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}