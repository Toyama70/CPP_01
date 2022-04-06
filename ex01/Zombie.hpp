/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:24:44 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 12:06:07 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>


class Zombie
{
	public :

	Zombie();
	Zombie(const std::string& name);
	~Zombie();
	void announce();

	//getters

	std::string getName() const;

	//setters

	void setName(const std::string name);

	private :
	std::string name;
};

Zombie*    zombieHorde( int N, std::string name );

#endif