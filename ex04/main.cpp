/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:10:00 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/06 16:32:54 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Usage: 3 arguments" << std::endl;
		exit(1);
	}
	std::ifstream ifs;
	ifs.open(argv[1], std::ifstream::in);

	std::string outName = std::string(argv[1] + std::string(".replace"));

	std::ofstream ofs(outName);
	std::string temp;
	while (ifs >> temp)
	{
		if (temp == std::string(argv[2]))
			ofs << std::string(argv[3]) << " ";
		else
			ofs << temp << " ";
	}
	ofs << std::endl;
	ifs.close();
	return (0);
}