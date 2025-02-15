/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 13:49:47 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/15 14:43:12 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainz.hpp"

int	main(void)
{
	int		N		= 5;
	Zombie*	horde	= zombieHorde(N, "HordeMember");

	if (!horde)
		return (1);
	for (int i = 0; i < N; i++)
		horde[i].announce();
	delete[] horde;
	return (0);
}
