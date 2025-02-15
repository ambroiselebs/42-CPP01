/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/15 14:37:21 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/15 14:43:24 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
		return (NULL);
	Zombie* horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		horde[i] = Zombie(name);
	return (horde);
}

