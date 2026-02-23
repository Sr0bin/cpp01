/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:07:14 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 12:49:09 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout << "Human B Constructor called. Name : " << name << std::endl;
};

HumanB::~HumanB()
{
	std::cout << "Human B Destructor called\n";
}
void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack()
{

	if (_weapon != NULL)
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
}

