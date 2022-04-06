/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 13:33:46 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 15:08:55 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {

	public :
	Weapon();
	Weapon(std::string type);
	~Weapon();

	const std::string& getType() const;
	void setType(std::string newType);

	private :
	std::string type;
};


#endif