/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:59:33 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 12:50:46 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon_constr) :  _name(name), _weapon(weapon_constr)
{
	std::cout << "Human A Constructor called. | Name : " << name << " | Weapon : " << weapon_constr.getType() << std::endl;
};

HumanA::~HumanA()
{
	std::cout << "Human A Destructor called\n";
}

void HumanA::attack()
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
