/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 23:23:28 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 11:16:13 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	int	sizeHorde = 5;
	Zombie	*Horde = zombieHorde(sizeHorde, "Blister");

	for (int i = 0; i < sizeHorde; i++)
		Horde[i].announce();
	delete[] Horde;
		
}
