/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:34:46 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 15:44:37 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanB
{
public:

	HumanB(std::string name);
	~HumanB();
	void	attack();
	void	setWeapon(class Weapon& Weapon);

private:
	std::string	name;
	Weapon		*Weapon;
};


#endif