/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 19:24:59 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/06 19:43:06 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP
#include <iostream>
#include <string>


class Harl {

public :
	Harl();
	~Harl();
	void	complain(std::string level);

private:
	void	debug();
	void	info();
	void	warning();
	void	error();
};




#endif /* HARL_HPP */