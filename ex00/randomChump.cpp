/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 23:43:08 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 11:04:39 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie stack(name);
	stack.announce();
	// Another solution :
	// Zombie *allocated = newZombie(name);
	// allocated->announce();
	// delete allocated;

}
