/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:51:28 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/15 14:42:25 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : name("default") {}
Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie(void) {}


std::string Zombie::get_name(void)
{
	return (this->name);
}

void    Zombie::announce(void)
{
	std::cout << get_name() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
