/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:30:36 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 12:06:56 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
class Weapon
{
private:
	std::string	_type;

public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string &getType();
	void setType(std::string type);

};

#endif

