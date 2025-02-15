/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:49:58 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/15 14:42:15 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	std::string get_name(void);
	void        announce(void);
};

#endif
