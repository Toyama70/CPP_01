/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 15:05:02 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/05 18:26:33 by ybestrio         ###   ########.fr       */
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
	~Zombie();

	void	announce();
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);

	//Getters
	std::string getName() const;

	//Setters
	void	setName(std::string name);

	private :
	std::string name;
};

#endif