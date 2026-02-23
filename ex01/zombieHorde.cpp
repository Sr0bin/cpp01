/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:05:13 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 11:10:52 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie * zombieHorde(int N, std::string name)
{
	Zombie	*allocated = new Zombie[N];
	for (int i = 0; i < N ; i++)
		allocated[i].setName(name);

	return (allocated);
}
