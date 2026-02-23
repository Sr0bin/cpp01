/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rorollin <rorollin@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 12:54:10 by rorollin          #+#    #+#             */
/*   Updated: 2026/02/23 14:11:09 by rorollin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ERROR_HPP
# define ERROR_HPP
# define ERR_ARGS_CNT "Usage : ./sed <filename> s1 s2\n\
s1 is is the string to search for, and s2 is the string to replace\n"
# define ERR_FILE_PERM "Can't open file.\n" << ERR_ARGS_CNT
# define ERR_FILE_CRT "Can't create new file.\n"
#endif

