/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainz.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aberenge <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 14:02:14 by aberenge          #+#    #+#             */
/*   Updated: 2025/02/13 14:02:52 by aberenge         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef brainz_hpp
# define brainz_hpp

# include "src/Zombie.hpp"

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif