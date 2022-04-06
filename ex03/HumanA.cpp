/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:04:47 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 15:37:17 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, class Weapon& Weapon)
:Weapon(Weapon)
{
	this->name = name;
	return ;
}

HumanA::~HumanA()
{

	return ;
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->Weapon.getType() << std::endl;

}