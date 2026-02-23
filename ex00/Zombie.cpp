/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/22 23:23:56 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 02:12:29 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>


Zombie::Zombie()
{
	print_default_constructor(_name);
}

Zombie::Zombie(std::string name) : _name(name)
{
	print_parametrized_constructor(_name);
};

Zombie::~Zombie()
{
	print_destructor(_name);
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
}

void	Zombie::print_default_constructor(std::string className)
{
	std::cout << "Zombie : " << className << " constructor called\n";
}

void	Zombie::print_parametrized_constructor(std::string className)
{
	std::cout << "Parametrized Zombie : " << className << " constructor called\n";
}

void	Zombie::print_destructor(std::string className)
{
	std::cout << className << " destructor called\n";
}
