/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 11:22:30 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 11:28:04 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
int	main()
{
	std::string brainz = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brainz;
	std::string	&stringREF = brainz;

	std::cout << "brainz memory adress : " << &brainz << std::endl;
	std::cout << "stringPTR memory adress : " << stringPTR << std::endl;
	std::cout << "stringREF memory adress : " << &stringREF << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "String brainz : " << brainz << std::endl;
	std::cout << "String stringPTR : " << *stringPTR << std::endl;
	std::cout << "String stringREF : " << stringREF << std::endl;
	std::cout << "----------------------------" << std::endl;

	brainz = "THIS IS NEW BRAIN";

	std::cout << "Modified brainz memory adress : " << &brainz << std::endl;
	std::cout << "Modified stringPTR memory adress : " << stringPTR << std::endl;
	std::cout << "Modified stringREF memory adress : " << &stringREF << std::endl;
	std::cout << "Modified ----------------------------" << std::endl;
	std::cout << "Modified String brainz : " << brainz << std::endl;
	std::cout << "Modified String stringPTR : " << *stringPTR << std::endl;
	std::cout << "Modified String stringREF : " << stringREF << std::endl;
	std::cout << "Modified ----------------------------" << std::endl;

}
