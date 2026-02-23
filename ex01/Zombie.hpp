/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 23:24:34 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 11:12:58 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
	std::string _name;
	void		print_default_constructor();
	void		print_parametrized_constructor(std::string className);
	void		print_destructor(std::string className);
public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void setName(std::string name);
	void announce(void);
};

Zombie * zombieHorde(int N, std::string name);


#endif
