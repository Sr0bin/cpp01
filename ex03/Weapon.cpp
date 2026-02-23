/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:32:42 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 16:19:08 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon()
{
	std::cout << "Weapon Default Constructor called\n";
}

Weapon::Weapon(std::string type) : _type(type)
{
	std::cout << "Weapon Parametrized Constructor called with type : " << type << std::endl;
};

Weapon::~Weapon()
{
	std::cout << "Weapon Destructor called\n";
}
const std::string &Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	_type = type;
	
}
