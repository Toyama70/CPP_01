/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:22:38 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/06 20:30:41 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

	Harl::Harl()
	{
		std::cout << "***Harl enters McDonalds, but we know his true name starts";
		std::cout << " with a 'K' and ends with 'Aren'" << std::endl;
		return;
	}

	Harl::~Harl()
	{
		std::cout << "***Kar... Harl leaves the shop promising to get everyone fired...";
		return;
	}

	void	Harl::complain(std::string level)
	{
		int i = -1;

		void	(Harl::*funcPTR[])(void) = {
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error
		};
		
		std::string levels[] = {
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};

		while (++i < 4)
		{
			if (level == levels[i])
				(this->*funcPTR[i])();
		}
		
		/* Example of single pointer function use : */
		//void	(Harl::*funcPTR)(void) = &Harl::debug;
		/*
		if (level == "WARNING")
		{
			//std::cout << "INSIDE IF" << std::endl;
			 (this->*funcPTR)();

		}*/
	}

	void	Harl::debug()
	{
		std::cout << "- I love having extra bacon for my 7XL-double-cheese ";
		std::cout << "-triple-pickle-special- ketchup burger. I really do!" << std::endl;
	}

	void	Harl::info()
	{
		std::cout << "- I cannot believe adding extra bacon costs more money. ";
		std::cout << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
	}

	void	Harl::warning()
	{
		std::cout << "- I think I deserve to have some extra bacon for free. ";
		std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
	}

	void	Harl::error()
	{
		std::cout << "- This is unacceptable! I want to speak to the manager now." << std::endl;
	}