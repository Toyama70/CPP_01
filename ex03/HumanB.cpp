/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:35:20 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 15:48:44 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	return ;
}

HumanB::~HumanB()
{

	return ;
}

void	HumanB::setWeapon(class Weapon& Weapon)
{
	this->Weapon = &Weapon;

}

void	HumanB::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->Weapon->getType() << std::endl;

}