/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 12:23:37 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 13:28:27 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string* stringPTR = &str;
	std::string& stringREF = str;

	std::cout << std::endl;
	std::cout << "address of str = " << &str << std::endl;
	std::cout << "address held by stringPTR = " << stringPTR << std::endl;
	std::cout << "address held by stringREF = " << &stringREF << std::endl;


	std::cout << std::endl;

	std::cout << "value of str = " << str << std::endl;
	std::cout << "value pointed by stringPTR = " << *stringPTR << std::endl;
	std::cout << "value pointed by stringREF = " << stringREF << std::endl;
	
}