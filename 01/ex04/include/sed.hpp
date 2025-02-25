/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygille <ygille@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 14:36:32 by ygille            #+#    #+#             */
/*   Updated: 2025/02/25 15:52:57 by ygille           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SED__
# define __SED__

# include <iostream>
# include <fstream>
# include <string>

void		fileCopy(std::ifstream* sourceFile, std::ostream* destFile, char* s1, char* s2);
std::string	replaceWord(std::string source, int sPos, int ePos, char *s2);
std::string	cppgnl(std::ifstream* source);

#endif