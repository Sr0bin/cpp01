/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:51:50 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 14:13:24 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "error.hpp"
#include <ios>
#include <iostream>
#include <fstream>
#include <iterator>

std::string	search_and_replace(const std::string &instr,
							   const std::string &search,
							   const std::string &replace)
{
	std::string outstr = instr;
	size_t	index;
	size_t r_len = replace.length();
	size_t s_len = search.length();

	if (search == replace)
		return (outstr);
	index = outstr.find(search, 0);
	while (index != std::string::npos)
	{
		outstr.insert(index, replace);
		outstr.erase(index + r_len, s_len);
		index = outstr.find(search, index + r_len);
	}
	return (outstr);
}

int	main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << ERR_ARGS_CNT;
		return (1);
	}

	std::ifstream infile;
	infile.open(argv[1]);
	if (!infile.good())
	{
		std::cout << ERR_FILE_PERM;
		return (1);
	}
	std::string out((std::istreambuf_iterator<char>(infile)),
				 std::istreambuf_iterator<char>());
	out = search_and_replace(out, argv[2], argv[3]); 
	infile.close();
	std::ofstream outfile((std::string(argv[1]) + ".replace").c_str());
	if (!outfile.good())
	{
		std::cout << ERR_FILE_CRT;
		return (1);
	}
	outfile << out;
	return (0);
}
