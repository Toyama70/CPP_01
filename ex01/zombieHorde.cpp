/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 11:40:08 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 12:16:57 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie*    zombieHorde(int N, std::string name)
{
	int i = 0;
	
	Zombie* zomb = new Zombie[N];

	while (i <= N)
	{
		zomb[i].setName(name);
		zomb[i].announce();
		i++;
	} 

	return(zomb);

}