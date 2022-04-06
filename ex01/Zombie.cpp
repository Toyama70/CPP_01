/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:29:59 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 12:16:31 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	//announce();
	return;
}

Zombie::Zombie(const std::string& name)
: name(name)
{
	announce();
}

Zombie::~Zombie()
{
	std::cout << this->name << " has been crushed into oblivion." << std::endl;
	return ;
}

void Zombie::announce()
{
	std::cout << this->name << " has been created." << std::endl;
}


std::string Zombie::getName() const
{
	return (this->name);

}

void Zombie::setName(const std::string name)
{
	this->name = name;
}