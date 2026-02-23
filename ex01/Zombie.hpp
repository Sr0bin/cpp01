/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 23:24:34 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/22 23:48:28 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string _name;
	void		print_default_constructor(std::string className);
	void		print_parametrized_constructor(std::string className);
	void		print_destructor(std::string className);
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);


#endif
