/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:40:22 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 15:21:05 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
	return;
}

Weapon::Weapon()
{
	return ;
}

Weapon::~Weapon()
{
	return;
}

const std::string& Weapon::getType() const
{
	return this->type;
}

void Weapon::setType(std::string newType)
{
	this->type = newType;
}