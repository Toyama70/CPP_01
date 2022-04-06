/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 14:04:55 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 15:37:36 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"

#include <iostream>
#include <string>

class HumanA
{
public:

	HumanA(std::string name, class Weapon& Weapon);
	~HumanA();
	void	attack();

private:
	std::string	name;
	Weapon&		Weapon;
};


#endif